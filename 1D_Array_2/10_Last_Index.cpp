//Finding Last Occurence of X in the array 

/*
vector 2 4 5 7 3 4 9 0 4 7 
Your X element = 4 
Methos 1 : apply loop from 0 index to end of vector 
Method 2 : Apply loop from the last index or Reversing the loop
*/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std ;
int main (){
    vector<int>v ;
    int n ;

    cout<<"enter the no of elements in vector: ";
    cin>>n;

    cout<<"Enter your elements of vector :";
    for( int i=0; i<n ; i++){
        int x ;
        cin>> x ;
        v.push_back(x);
    }

    cout<<"Enter your last index elements : ";
    int x ; cin >> x ;
    
    int idx = INT_MIN ;

    for( int i=0; i<v.size(); i++){
        if(v.at(i)==x) idx=i ;
    } //But not efficinet way. 

    // for( int i=v.size(); i>=0; i--){   //Recommeded way
    //     if( v.at(i)==x) idx = i ;
    // }

    cout<<"Elements present at last index no :"<<idx<<endl;
    if(idx == -1) cout<<"Element Not Pressent ";

}