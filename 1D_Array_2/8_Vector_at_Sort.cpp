#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std ;
int main (){
    vector<int>v ;
    v.push_back(4);
    v.push_back(3);     
    v.push_back(5);
    v.push_back(8);
    v.push_back(4);
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);

    cout<<v.at(2); //Another method output
    v.at(3) = 90 ; //Also we can update/modify the value using v.at()
    cout<<v[2];

    for(int i=0 ; i<v.size(); i++){
        cout<<v.at(i); 
    }

    // sort function ()
    cout<<endl;
    sort(v.begin(), v.end());
    for( int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    
}