/*
Fibonacci Series
************************
Series:  1 1 2 3 5 8 13 21 34 ........
terms :  1 2 3 4 5 6 7  8  9th terms...........
1 + 1 = 2 
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8
5 + 8 = 13
```````````````````````````````
nth fibonacci term ??
--> (n-1) + (n-2)
SO , Fibonacci(n) = Fibonacci(n-1) + fibonacci(n-2)
ans for the first and second term --> if( n==1 || n==2 ) return 1;

*/

#include<iostream>
using namespace std ;

int Fibonacci(int n){

  if( n==1 || n==2 ){
    return 1;
  }
  return (Fibonacci(n-1) + Fibonacci(n-2));

}

int main(){
  cout<<Fibonacci(50);
}