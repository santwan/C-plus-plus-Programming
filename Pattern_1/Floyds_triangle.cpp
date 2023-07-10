#include<iostream>
using namespace std ;
int main (){
    int n , j , i ,a = 1 ;
    cout<<"Enter No of Rows : ";
    cin >> n ;
    for( i=1 ; i<=n ; i++){
        
        for( j=1 ; j<=i ; j++){
            cout<< a <<" " ;
            a++ ;

        }
        cout<<endl;

    }
}