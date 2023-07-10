//Find the doublet in the array whoese sum is equal the given value X 

/*
VCETOR -> 2 3 5 7 3 9 0 5  if given value x=5
in the array 2+3 = 5 
*/ 

/* 
Travel through the array using iterations
apply two loops here
1st loop for 
*/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int>v ;

    int n , flag = 1 ;

    cout<<"enter the no of elements in vector: ";
    cin>>n;

    cout<<"Enter your elements of vector :";
    for( int i=0; i<n ; i++){
        int x ;
        cin>> x ;
        v.push_back(x);
    }

    cout<<"Enter your target value : ";
    int x ; cin>>x ;

    //!st for loop for selecting every element except LAST INDEX
    for( int i=0; i<v.size()-1; i++ ){

        //for Selecting only elements which appear after i index
        for(int j=i+1; j<v.size(); j++){

            if( v[i]+v[j]==x ){
                cout<<i<<","<<j<<endl;
            }
            else flag = 0 ;

            
        }
    }

    if(flag = 0) cout<<"Not found";




}