#include<iostream>
#include<vector>
#include<bits/stdc++.h>
//when are passing vector to functions -> PASS BY VALUE. 
//Where in case of array , it happens via PASS BY REFERENCE
using namespace std ;
void change(vector<int>&a ){ // When we are not using Ampersand(&) operator a-> 4 3 5 8/ a is becoming a new vector 
    a[3] = 100 ;             // a-> 4 3 5 100 / changes only in a vector NOT v vcetor
}
int main (){
    vector<int>v ;
    v.push_back(4);
    v.push_back(3);     
    v.push_back(5);
    v.push_back(8);

    for( int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    change(v); 

    for(int i=0 ; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }



  
    
}