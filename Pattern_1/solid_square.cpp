#include<iostream>
using namespace std ;
int main (){
    int n , i , j ;
    cout<<"No of Rows :" ;
    cin >> n ;
    for( i=1 ; i <= n ; i++){
        for( j=0 ; j<=n ; j++){
            cout<<"@";

        }
        cout<<endl;
    }
}