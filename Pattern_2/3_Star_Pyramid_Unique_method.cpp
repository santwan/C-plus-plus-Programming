#include<iostream>
using namespace std ;
int main(){
    int n, i ,j ;
    cout<<"No of Lines :";
    cin>>n;
    // nst= no of star line | nsp = no of space
    int nst = 1 ;
    int nsp = n-1 ; 
    for( i=1 ; i<=n ; i++){
        // No of spaces
        for( j=1 ; j<=nsp; j++){
            cout<<" ";

        }
        nsp-- ;
        for( int k = 1 ; k<=nst; k++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
}