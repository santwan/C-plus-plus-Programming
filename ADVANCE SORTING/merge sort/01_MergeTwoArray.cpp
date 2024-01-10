#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

void mergeArray(vector<int>&a, vector<int>&b , vector<int>&result){
  int i = 0;
  int j = 0;
  int k = 0;

  while(i<a.size() && j<b.size()){
    
    if( a[i]<b[j] ) {

      result[k++] = a[i++];
      // i++ ; 
      // j++ ;
    }
    else result[k++] = b[j++];
  }

  if(i == a.size()){
    while(j<b.size()){
      result[k++] = b[j++];
    }
  }

  if( j == b.size() ){
    while(i<a.size() ){
      result[k++] = a[i++]; 
    }
  }
}

int main(){
  int a[]={1,4,6,8,9};
  int size_a = sizeof(a)/sizeof(a[0]);
  vector<int> vector_a(a, a + size_a);

  int b[]={2,3,5,6,7,9,11,15,16};
  int size_b = sizeof(b)/sizeof(b[0]);
  vector<int> vector_b(b, b + size_b);

  vector<int> result(size_a + size_b);
  mergeArray(vector_a, vector_b, result);

  for(int i=0 ; i<result.size(); i++){
    cout<<result[i]<<" ";
  }
}