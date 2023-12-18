#include<iostream>
using namespace std ;
int main(){
    
    int i , j , n ;
    cout<<"Enter No of Rows : ";
    cin>>n ;
    for ( i=1; i<=n ; i++){
        for( j=1; j<=n-i ; j++){
            cout<<" ";
        }
        for( int k =1; k < 2*i ; k++){
            cout<<"*";
        }
        cout<<endl; 
    }
}

