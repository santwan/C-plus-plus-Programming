#include<iostream>

using namespace std ;
int main(){
    int n , count = 0 , num  ;
    cout << " Enter Your Number ";
    cin >> n ;
    num = n ;
    while(n >0){
        n /=10 ;
        count ++ ;
    }
    if (num == 0) cout << "1";
    else
    cout<<count ;
    return 0 ;
}