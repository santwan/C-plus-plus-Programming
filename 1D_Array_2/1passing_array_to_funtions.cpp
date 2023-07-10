#include<iostream>
using namespace std ;

void display( int a[],int size ){
    cout<<size<<endl;
    for( int i=0; i<=size-1; i++ ){
        cout<<a[i]<<" ";
    }
    cout<< endl;
}

void change(int b[], int size){
    b[0]=100 ;

}

int main(){
    int arr[]={2,4,5,9,7,6,5,666,666778,889,6,55,4,333,4456,7890,4322,22,2,2,3,4,5,5,6,78,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    //Accessing elements of the array into an another function
    //Updation pass by value or pass by referesnce
    display(arr, size) ;
    change(arr, size);
    display(arr, size);
}

//Array follows pass by reference method 