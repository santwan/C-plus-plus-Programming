#include<iostream> 
using namespace std ;
int main(){
    //Declaration of array
    int arr[7]; // 0 1 2 3 4 5 6 This are Indices
    
    // initialization of array
    arr[0] = 3 ;
    arr[1] = 34 ;
    arr[2] = 33;
    arr[3] = 38;
    arr[4] = 23;
    arr[5] = 5;
    arr[6] = 32 ;
    cout<<arr[4];

    //We can also write this in this way 

    int array[4] = {1, 4 , 6 , 9 } ;
    cout<<array[3] ; //indexing starts from 0 
    cout<<array[4]; // It will give eroors



    //another way 
    int array2[]={1, 2,4,5,6,7,4,9} ; //If we donot declaire the size of the array, we have to intialize the array simultaneously.
    

}