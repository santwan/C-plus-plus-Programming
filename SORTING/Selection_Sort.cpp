/* array = 5 3 2 6 1

selection sort 
[ ( 5 3 2 6 1) ] 
1. Select the zero index. Because you are going to swap the zero index with the smallest number in array
2. Search the smallest element within the parenthesis 
3. So you are going to use loops within the loop
4. Outer loop to find select the first index and swapping
5. Inner loop to find the smallest number & index in array
after swapping the array looks kind of like this -->  1 3 2 6 5 ( swap b/w 1 & 5 )
1 | 3 2 6 5 --> Lest hand side  SORTED , RHS Unsorted

1 | [ ( 3 2 6 5 )]  --> Repeat the Same 1 , 2 , 3 , 4 , 5 Steps
1 | [ ( 2 3 6 5 )] 

1 2 | [ ( 3 6 5 )] 
1 2 | [ ( 3 6 5 )] 

1 2 3 | [ ( 6 5 )] 
1 2 3 | [ ( 5 6 )] 

ARRAY SORTED = 1 2 3 5 6
>> Observation  <<
>> Array Size = 5 , Total Number of Steps = 4 
>> Outer Loop Runs 4 times from 0 to 4 3 index  >> As Outer loop is for only selection of first index of UNSORTED ARRAY
>> Inner loop Runs 4 times from 0 to last 4 index >> aS Inner loop is for searching the smallest element within whole array

Now Find the smallest element within the array selected box
*/


#include<bits/stdc++.h>

using namespace std ;
int main(){
    int arr[] = {5,4,3,2,1} ;
    int n = 5 ;
    for( int ele : arr ){
        cout<<ele<<" " ; // for rach loop
    }


// insertion sort

for( int i = 0 ; i < n - 1 ; i++ ){
    int min = INT_MAX ;
    int mindx = -1 ;
    for ( int j =i ; j<n ; j++ ){



    }

}



}