#include<iostream>
using namespace std ;

int main (){
    int n , var , sum = 0  ;
    cout<<"Enter THe Number :" ;
    cin>> n ;

    while(n>0){
        var = n % 10  ;
        sum = sum + var ;
        n/=10 ;
    }
    cout<<sum ;
}