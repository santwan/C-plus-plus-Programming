// WAP TO FIND THE TRANSPOSE OF A MATRIX 

#include<bits/stdc++.h>
using namespace std ;

const int row = 100 ;
const int colomn = 100 ;

int main(){
    int m, n;
    cout<<"Enter no of rows and colomns : ";
    cin>>m >> n ;

    int arr[m][n] ;
    int transpose[m][n] ;

    cout<<"Enter no of elements of the matrix : ";
    for( int i=0 ; i<m ; i++ ){
        for( int j=0; j<n ; j++ ){
            cin>> arr[i][j] ;
        }
    }
    
    for(int i=0 ; i<m ; i++ ){
        for( int j=0; j<n ; j++){
            transpose[i][j] = arr[j][i] ;
        }
    }
    
    cout<<endl ;
    for(int i=0 ; i<m ; i++){
        for( int j=0 ; j<n ; j++){
            cout<<transpose[i][j]<<" " ;
        }
        cout<<endl ;
    }
}