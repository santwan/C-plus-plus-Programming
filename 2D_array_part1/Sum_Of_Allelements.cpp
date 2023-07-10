// WAP TO PRINT THE SUM OF ALL ELEMENTS IN THE 2D ARRAY 

#include<bits/stdc++.h>
using namespace std ;

int main (){
    int sum = 0 ;
    int m , n ;
    cout<<"Enter Number of rows : ";
    cin>>m ; 
    cout<<"Enter NUmber of Colomns : ";
    cin >> n ;

    int arr[m][n] ; 

    cout<<"ENter the elements of the array : ";
    for( int i=0 ; i<m ; i++){
        for( int j=0 ; j<n ; j++){
            cin >> arr[i][j]; 
        }
    }

    for(int i=0 ; i<m ; i++){
        for( int j=0 ; j<n ; j++){
            sum = sum + arr[i][j] ;
        }
    }

    cout<<"Sum of All elements = "<<sum ; 
}