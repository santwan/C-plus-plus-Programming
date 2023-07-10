// //Using Extra Variable
#include<iostream>
using namespace std ;
int main(){
    int n , j , i ;
    cout<<"Enter No Of Rows";
    cin>>n ;
    int a = 1 ;
    for( i=1; i<=n ; i++){
        if( i%2!=0) a = 1 ;
        else a = 0 ;
        for( j=1 ; j<=i ; j++){
            cout<< a ;
            if(a==0) a=1 ;
            else a = 0 ;

        }
        cout<<endl;
    }
}


// // BY USING SECOND METHOD

// #include<iostream>
// using namespace std ;
// int main (){
//     int n , i , j ;
//     cout <<"Enter No of Rows :";
//     cin >> n ;
//     for ( i=1 ; i<=n ; i++){
//         for( j=1 ; j<=i)
//     }
// }