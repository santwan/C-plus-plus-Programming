#include<iostream>
using namespace std ;
int main (){
    int i , j , n ;
    // int a = 1 ; DONOT DECLAIR a OUTSIDE THE LOOP
    cout <<"ENter No of Rows :";
    cin >> n ;
    // for( i =1 ; i<=n ; i++ ){
    //     cout<< a ;
    //     a+=2 ;
    for( i=1 ; i<=n ; i++){
        int a =1;
        for( j=1 ; j<=i ; j++){
            cout<< a ;
            a+=2 ;
        }
        cout<<endl;
    }

        // for( j=1 ; j<=i ; j+=2){
        //     cout<<j ;
        // }
        // cout << endl ;
    
    return 0;
}