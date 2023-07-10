#include<iostream>
using namespace std ;
int main (){
    int i , n , j , k ;
    cout<<"Enter The Number Of Rows :";
    cin>>n ;
    for( i = 1 ; i<=n ; i++){
        
        //loop for blank spaces

        for( j=1 ; j<= n-i ; j++){

            cout<<" ";
            
        }
        //loop for hasg or stars 

        for(k=1 ; k<=i ; k++){

            cout<<"#";
        
        }

        cout<<endl;


    }

}