#include<iostream>
using namespace std ;

void display( int arr[], int n , int index){
  if(index==n) return;
  cout<<arr[index]<<" ";
  display( arr, n , index+1);
}
int main(){
  int arr[] = {3,5,7,8,90,9,6,3,2,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  display( arr , n , 0);

}