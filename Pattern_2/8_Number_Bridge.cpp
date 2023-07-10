#include<iostream>
using namespace std ;
int main (){
    int n, i, j, k , a = 1 ;
    cout<<"Enter No Of Lines : ";
    cin>>n ;
    int m = n-1 ;
    int nsp=1;

    for( i=1; i<=m ; i++){
        int a=1;
        for( j=1; j<=m+1-i ; j++){
            cout<< a ;
            a++ ;
        }
        for( int k=1; k<=nsp ; k++){
            cout<<" ";
            a++ ;
            
        }
        nsp+=2;
        for( int x=1; x<=m+1-i; x++){
            cout<<a ;
            a++ ;
        }
    cout<<endl;
    }

}