// Sure, here's a simple C program that converts an infix expression to a postfix expression using the Shunting Yard algorithm:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1;
}

void push(Stack *stack, char item) {
    if (stack->top < MAX_SIZE - 1) {
        stack->data[++(stack->top)] = item;
    } else {
        printf("Stack overflow!\n");
        exit(1);
    }
}

char pop(Stack *stack) {
    if (stack->top >= 0) {
        return stack->data[(stack->top)--];
    } else {
        printf("Stack underflow!\n");
        exit(1);
    }
}

int precedence(char operator) {
    if (operator == '+' || operator == '-')
        return 1;
    if (operator == '*' || operator == '/')
        return 2;
    return 0;
}

void infixToPostfix(char infix[], char postfix[]) {
    Stack stack;
    initialize(&stack);
    int i = 0, j = 0;

    while (infix[i] != '\0') {
        char token = infix[i];

        if (isalnum(token)) {
            postfix[j++] = token;
        } else if (token == '(') {
            push(&stack, token);
        } else if (token == ')') {
            while (stack.top >= 0 && stack.data[stack.top] != '(') {
                postfix[j++] = pop(&stack);
            }
            pop(&stack); // Pop '(' from stack
        } else {
            while (stack.top >= 0 && precedence(token) <= precedence(stack.data[stack.top])) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, token);
        }

        i++;
    }

    while (stack.top >= 0) {
        postfix[j++] = pop(&stack);
    }

    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    printf("Enter an infix expression: ");
    fgets(infix, sizeof(infix), stdin);

    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);

    return 0;
}

// This program takes an infix expression as input and converts it to postfix using the Shunting Yard algorithm. Just compile and run the program, and it will prompt you to enter an infix expression. After entering the expression, it will output the corresponding postfix expression.