#include<iostream>
using namespace std ;
int main(){
    int n, i ,j ;
    cout<<"No of Lines :";
    cin>>n;
    int a = 1 ;

    for( i=1; i<=n; i++){
        a=i ;
        for( j=1 ; j<=i ; j++){
            cout<<a;
            a-- ;
        }
        cout<<endl;
    }
}