#include<iostream>
using namespace std ;
int main(){
    int n, i ,j ;
    cout<<"No of Lines :";
    cin>>n;

    for ( i=1; i<=n ; i++){
        for( j=1; j<=n-i ; j++){
            cout<<" ";
        }
        for( int k=1; k<=i; k++){
            cout<<k;
        }
        int a = i-1 ;
        for( int x=1; x<=i-1 ; x++ ){
            cout<<a ;
            a--;
        }
        cout<<endl;
        }
        
    }

