#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void printMax( int arr[], int n , int index , int min){
  if(n==index){
    cout<<min<<endl;
    return;
  }
  if(min<arr[index]) min = arr[index];
  printMax( arr, n, index+1 , min);
}

int  maxInArray( int arr[], int n , int idx, int min){
  if(idx==n) return min;
  return max(arr[idx], maxInArray(arr,n,idx+1,min));
}

int main(){
  int arr[] = {3,5,7,8,90,9,6,3,2,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int min = INT_MIN ;
  
  printMax( arr , n , 0, min );

}