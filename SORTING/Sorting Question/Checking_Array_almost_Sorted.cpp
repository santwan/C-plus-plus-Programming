/*
Almost Sorted means Elements are just one idex away from sorting
for example -->>  4 2 7 9 8  


*/


// Method Number 1 : Using extra array 
//

// #include<bits/stdc++.h>

// using namespace std :

// int main() {
//     int arr[] = { 4 , 2 , 7 , 9 , 8} ;
//     int n = 5 ;
//     int brr[5] ;
//     for( int i = 0 ; i < n ; i++ ){
//         brr[i] = arr[i] ;
//     }
// }


// Method 2 : Without using Extra array
// Almost Sorted means after just one pass we will get sorted array
// It has less space complexity. 

// #include<bits\stdc++.h>

// using namespace std ;

// bool Checking_Sort( vector<int>&v ){

//     int flag = 1 ;
//     for( int i = 0 ; i < v.size() - 1 ; i++ ){

//         if( v[i] < v[i+1])
//             flag = 1 ;
//         else flag = 0 ;
//     }

//     if( flag == 1 ) return true ;
//     else return false ;
// }

// int main() {
//     vector<int> v(5) ;
//     v = {4,2,7,9,8} ;

//     for( int i = 0 ; i<v.size() ; i++ ){

//         for( int j = 0 ; j< v.size() - i ; j++ ){

//             if( v[j] > v[j+1])
//                 swap(v[j], v[j+1]);
//         }

//         if( Checking_Sort( v ) ){
//             cout<<"True" ;
//             break ;
//         }
//         else{
//             cout<<"False" ;
//             break;
//         }
        
//     }

//     cout<<endl ;
//     for( int i = 0 ; i< v.size(); i++ ){
//         cout<< v[i]<<" " ;
//     }

// }









//Method 3 : Also without using extra array

#include<bits/stdc++.h>

using namespace std ;

int main(){

    vector<int> v(5) ;
    v = {4 , 2 , 6 , 9 , 8 };
    
    for( int i = 0 ; i<v.size(); i++ ){

        int count =  0 ;
        for( int j = 0 ; j< v.size(); j++ ){
            if( i== j) continue;

            if( v[i] > v[j] ) count++ ;


        }
        int actual_index = v.size() - count - i ;

        if ( actual_index == 0 ){
            ifb
        }
    }

}