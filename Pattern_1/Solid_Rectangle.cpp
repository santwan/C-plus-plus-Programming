#include<iostream>
using namespace std ;
int main (){
    long long int n , i , j ;
    cout<< "no of coloums :" ;
    cin>>n ;
    long long int m ;
    cout<<"NO of Raws :";
    cin >> m ;
    for( i=1 ; i<=n ; i++){
        for( j=1 ; j<=m ; j++ ){
            cout<<"@";
    }
        
        cout<<endl;
    }


}