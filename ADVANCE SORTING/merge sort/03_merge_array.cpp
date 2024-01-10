#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int temp[], int n){
  
  int middle = n/2 ;

  int i = 0 ;
  int j = middle;
  int k = 0;

  while( i < middle && j < n){
    if(arr[i]<arr[j]) temp[k++] = arr[i++];
    else temp[k++] = arr[j++];
  }

  while( j <  n) temp[k++] = arr[j++];
  
  while( i <= middle ) temp[k++] = arr[i++];
  

  
}

int main(){

  int a[] = {1,4,5,9,10,45};
  int n = sizeof(a)/sizeof(a[0]);

  int temp[n];
  cout<<n<<endl;

  merge(a, temp , n);

  for(int i = 0 ; i < n ; i++){
    cout<<temp[i]<<" ";
  }
}