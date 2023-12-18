//Making a function which calculate the factorial of n using recursion
/*
5! = 5*4*3*2*1 = 5 * 4!
7! = 7 * 6!
n! = n *(n-1)!
*/
int factorial(int n){
  if(n==1 || n==0) return 1;
  return n*factorial(n-1);
}

#include<iostream>
using namespace std ;
int main(){
  cout<<"Enter your number: ";
  cout<<endl;
  int n ; cin>>n ;
  cout<<"Factorial of n: "<<factorial(n);
}



