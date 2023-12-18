/*

2^16 = 2^8 * 2^8
     = (2^8)^2
2^8  = (2^4 * 2^4)^2
     = (2^4)^4
2^4  = (2^2 * 2^2)^4
     = (2^2)^8
2^2  = (2^1 * 2^1)^8

16 --> 8 --> 4 --> 2

SO GENARALISATION FORMULA :
power(x,n) = power(x,n/2) + power(x,n/2)
But it willl give us a very bad time complexity , so to improve TC 
int ans = power(x,n/2)
return ans+ans
But this will work only specific cases, Lets see.............

*/

//__________________
//CODE:
//````````````````````````````````````````````````````````````````````````````````
/*
#include<iostream>
using namespace std ;

int power(int a, int b){
     if(b==1) return a;
     int ans = power(a,b/2);
     return ans*ans;
}
int main(){
//-----------------------------------
  cout<<power(1,2)<<endl;
  cout<<power(2,6)<<endl;//Expected 64 but get 16
  cout<<power(2,8)<<endl;//yes got expected ans
  cout<<power(2,5)<<endl;//Expected 31 but get 16
  cout<<power(7,2)<<endl;
  cout<<power(7,5)<<endl;
  cout<<power(6,4)<<endl;
  cout<<power(6,3)<<endl;
  cout<<power(9,3)<<endl; 

} 
*/
//------------------------------------------------------------------------------------------------------------
/*
Lets understand what is the problem

2^100 = 2^50 * 2^50
2^50  = 2^25 * 2^25
2^25  = 2^12 * 2^12 (if multiplied with 2 then error will be gone)
2^12  = 2^6 * 2^6
2^6   = 2^3 * 2^3
2^3   = 2^1 * 2^1 (if multiplied with 2 then error will be gone)
________________
CONCUSION --> Problem is with the exponent not the base because we are dividing the exponent by 2 in every function call.
So as exponent is an integer, whenever exponent becomes an odd number in any function call, 
then it will return only interger value. and that is why we are getting errrors. 
So to compensate this errro, improved code will be like this

*/

#include<bits/stdc++.h>
using namespace std ;

int power(int base, int exponent){

     if(exponent == 0) return 1;

     if(exponent % 2 == 0) {
          int halfPower = power(base, exponent/2) ;
          return halfPower*halfPower;
     }


     if(exponent % 2 != 0) {
          int halfPower = power(base, exponent/2) ;
          return base*halfPower*halfPower;
     }

}

int main(){
     cout<<power(5,3);
}
