/*
array = 5 3 1 4 2 

5 | 3 1 4 2
We will start checking with No 1 index 
Not zero index
if 3 is greater than 5 then break & stop
if 3 is smaller than 5 then swap between 5 & 3
now array will look 3 5 | 1 4 2

Then again Start checking with  2 index
if 1 is greater than 5 then break & stop
if 1 is smaller than 5 then swap between 5 and 1
array --> 3 1 | 5 4 2
continue this process of swapping till zero index
if 1 is grater than 3 then break & stop
if 1 is smaller than 3  then swap b/w 3 and 1
now we reached to zero index
Final Array --->  1 3 5 | 4 2

NOTE : Always The part of the array which left to '|' is SORTED
       Always  Right part is UNSORTED

*/


#include<bits/stdc++.h>

using namespace std ;

int main(){
    int arr[] = {5 , 30 , 1 , -4 , 2 } ;
    int n = 5 ;

    for( int ele : arr ){
        cout<<ele<<" " ;
    }

    //Insertion Sort

     for( int i = 1 ; i< n  ; i++ ){
        int j = i ;
        while( j > 0){
            if ( arr[j] >= arr[j-1] )
                break;
            // if ( arr[j] < arr[j-1])
            else
                swap( arr[j-1] , arr[j]) ;
            j-- ;
        }
     }
    cout<<endl;
     for( int ele : arr ){
        cout<<ele<<" " ;
     }


}