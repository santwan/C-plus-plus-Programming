#include<iostream>
using namespace std ;
int main(){
    int n , i , j ;
    cout<<"No of Rows:";
    cin>> n ;
    if(n%2 != 0){
        int mid = n/2 + 1 ;
        for(i=0; i<=n; i++){
            for(j=0; j<=n ; j++){
                if( i== mid || j == mid){
                    cout<<"@";
                } else{ cout<<" ";}
            }
            cout<<endl;
        }
    }
    
}