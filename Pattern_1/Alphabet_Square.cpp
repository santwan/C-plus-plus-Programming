#include<iostream>
using namespace std ;
int main (){
    //Asky Value of A = 65 and a = 97  
    int i , j , n ;
    cout<<"Enter The Number Of rows :";
    cin>> n ;
    for( i=1 ; i<=n ; i++){
        for( j=1 ; j<=n ; j++){
            cout<< (char)(j+96) <<" " ;
        }
        cout<<endl;
    }
}