#include<iostream>
using namespace std ;
int main(){
    int i , j , n ; 
    cout<<"Enter The No Of Rows :";
    cin >> n ;
    int nsp = 1 ;
    int m = n-1 ;

    for( int x=1; x<=2*n-1; x++){
        cout<<"*";
    } 
    cout<<endl;

    for( i=1 ; i<=m ; i++){
        // for First Triangle 
        for( j=1; j<=m+1-i ; j++){
            cout<<"*";
        }
        for( int k=1 ; k<=nsp ; k++){
            cout<<" ";
        }
        nsp+=2 ;

        for( int x = 1 ; x<=m+1-i; x++){
            cout<<"*";
        }
    cout<<endl;
    }
    
}