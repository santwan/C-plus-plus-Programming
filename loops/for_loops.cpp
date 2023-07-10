// #include<iostream>
// using namespace std;
// int main(){
//     int n , i;
//     cout<<"enter The Number"<<endl;
//     cin>>n;
//     for( i=1; i<=n; i++){
//         cout<<"Hello World"<<endl;
//     }
//     cout<<i;

//     return 0;
// }

//-------------------------------------------------

// #include<iostream>
// using namespace std;

// int main(){

// //print all the even numbers from 1 to 100 

// int i , n ;
// cout<<"Enter The Limit Number : ";
// cin>>n;

// for(i=1; i<=n ; i++){

//     if(i%2==0) cout<<i<<endl;

// }
// return 0;
// }

//------------------------------------------------------------------------


// #include<iostream>
// using namespace std;
// int main(){

// //Table of 19 in very inefficinet way
// int i ;
// for( i=19; i<=190 ; i++){
//     if(i%19==0) cout<<i<<endl;
// }
// //Loop is running 190-19=171 time

// return 0 ;
// }

//--------------------------------------------------------------------------

#include<iostream>
using namespace std;
int main(){

    int i , n , limit , multiplication ;
    cout<<"Enter The number of which you want to find multiplication table :";
    cin>>n ;
    cout<<"Enter THe LImit of multiplication Table: ";
    cin>>limit;


    // for( i = 1; i<=limit ; i++){

    //     multiplication = n*i ;
    //     cout<< multiplication<< endl;

    // }

    for( i = 0; i<=n*limit; i += 1){
        cout<< i<<endl ;        
    }
    return 0;
}

     

