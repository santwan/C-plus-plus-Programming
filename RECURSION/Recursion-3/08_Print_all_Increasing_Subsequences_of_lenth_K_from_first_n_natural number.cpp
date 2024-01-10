#include<bits/stdc++.h>
using namespace std ;

void subsetArray(int original[] , int size, int index ,vector<int> v ){
  if(index==size){
    for(int i=0 ; i<v.size();i++){
      cout<<v.at(i)<<" ";
    }
    cout<<endl;
    return;
  }

  int firstNum = original[index];

  subsetArray(original, size , index+1 , v);
  v.push_back(firstNum);
  subsetArray(original , size , index+1 , v);
  

  }


int main (){
  int arr[] = {1,2,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  vector<int>ans ; 
  subsetArray(arr, n , 0 ,ans );


}