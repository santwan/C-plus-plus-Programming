#include<iostream>
using namespace std ;
int main(){
    int i , j , n ;
    cout<<"No of rows :";
    cin >> n ;
    // No of stars = n + 1 - i 
    for ( i=1 ; i<=n ; i++){
        for ( j=1 ; j<= (n+1)-i ; j++ ){
        cout<<"*";
    }
    cout<<endl;

}
return 0;
}