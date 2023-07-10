#include<iostream>
#include<stdl
using namespace std;
int main(){
    
    cout<<"ENter the size of the array";
    int x;
    cin>>x;
    int arr[x] ;
    cout<<"Enter The elements of array: ";
    for(int i=0; i<=x-1; i++){
        cin>>arr[i];
    }
    int i;
    int max= INT_MIN ; //Always Select The first elemnet of array
    for( i=1; i<=x-1; i++){
        if( max<arr[i]) max=arr[i];
    }
    cout<<"THE MAX NUMBER IN ARRAY "<<max<<" AT INDEX NO "<<i-1;
    int j;
    int SecMax = arr[0] ; 
    for( j=1; j<=x-1; j++){
        if(SecMax!=max && SecMax<arr[j]) SecMax=arr[j];
    }
    cout<<"THE SECOND MAX NUMBER IN ARRAY "<<SecMax<<" AT INDEX NO "<<j-1;


}