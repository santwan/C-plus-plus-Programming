#include<iostream>
using namespace std ;

int main(){
    int n , sum = 0 , rem = 0  ;
    cout<<"Enter Your Number : ";
    cin>> n ;
    
    while (n>0){
        rem = n % 10 ;              //rem = n % 10 ;
        sum = sum*10 ;              //sum = sum + rem ;
        sum = sum + rem ;           //sum = sum*10 ; 
        n = n / 10 ;                //n = n / 10 ; 


    }
    cout<< sum ;
}