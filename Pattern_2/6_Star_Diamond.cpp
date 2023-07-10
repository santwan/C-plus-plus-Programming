#include<iostream>
using namespace std ;
int main(){
    int i , j , n ;
    cout<<"Enter No of Rows : ";
    cin>> n ;
    int nsp = n-1;
    int nst = 1;
    for( i=1; i<=2*n-1 ; i++ ){
        // For spaces 

        for( j=1; j<=nsp ; j++ ){
            cout<<" ";

        }
        if( i<n ) nsp-- ;
        else  nsp++ ;

        // For Star Lines 
        for( int k = 1 ; k<=nst ; k++){
            cout<<"*";

        }
        if( i<n) nst+=2 ;
        else nst-=2 ;
    cout<<endl;
    }
}