#include<iostream>
using namespace std ;
int main (){
    // Number Triangle 
    // 1
    // 12
    // 123
    // 1234
    int i, j , n ;
    cout <<"number Of rows :";
    cin >> n ;
    for(i=1 ; i<=n ; i++){
        for(j=1; j<=i ; j++){
            cout<<j;
            // cout<<i ;
        }
        cout<<endl;
    }
}