#include<bits\stdc++.h>

using namespace std ;
/*
>> Basic Bubble Sort <<

int main(){
    int n = 5 ; 
    int arr[n] = {5,4,6,3,2,1};

    for( int i = 0 ; i<n-1; i++ ){//n-1 passes
    
        for( int j=0 ; j<n-1 ; j++ ){

            if( arr[j] > arr[j+1] ){

                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

*/

// bool Checking_Sort( int array[], int n ){
//     for(int i = 0 ; i< n -1 ; i++ ){
//         if( array[i] > array[i+1]){
//             return false ;
//         }
//     }
//     return true ;
// }


/* Slightly Modified Code

int main(){
    int n = 5 ; 
    int arr[n] = {1,2,3,4,5};

    for( int i = 0 ; i<n-1; i++ ){//n-1 passes
        
        if(Checking_Sort(arr , n))
            break;

        for( int j=0 ; j<n-1-i ; j++ ){

            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }

    for( int i = 0 ; i< n ; i++ ){
        cout<<arr[i]<<" " ;
    }
}

*/



// More Optimized Code for bubble sort


int main(){
    int n = 5 ; 
    int arr[n] = {1,2,3,4,5};

    for( int i = 0 ; i<n-1; i++ ){//n-1 passes
        // traverse 
        bool flag = true ;
        for( int j=0 ; j<n-1-i ; j++ ){

            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
                flag = false ;
            }
        if( flag == true )
            break;
        }
    }

    for( int i = 0 ; i< n ; i++ ){
        cout<<arr[i]<<" " ;
    }
}