// Given an array, predict if the array contains duplicates or not.

#include<bits/stdc++.h>

using namespace std ;

void input_array( int x , vector<int>&a ){
    cout<<"Enter the elements of the array:\n";

    for(int i=0 ; i<x ; i++){
        int m ;
        cin>> m ;
        a.push_back(m);
    } 
}

void display_array(vector<int>&v){
    cout<<"Your Array Is: ";
    for( int i=0 ; i< v.size() ; i++){
        cout<<v.at(i)<<" " ;
    }
}

int main(){
     cout<<""
}