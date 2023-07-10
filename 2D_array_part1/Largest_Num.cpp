//WAP programme to find the largest elements in the given 2D array 

#include<bits/stdc++.h>
#include<iostream>
using namespace std ;

int main(){
    int max = INT_MIN ;
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

    for( int i =0 ; i<m ; i++){
        for( int j=0 ; j<n ; j++){
            if( max<arr[i][j]){
            max = arr[i][j] ; 
            }
        }
    }

    cout<<"Largest Number in this array "<<max ;

}
