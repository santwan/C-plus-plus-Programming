//Coping the content of one array into another array in reverse order

/*
vector 1 --->   2 4 7 4 9 6 0 
vector 2---->   0 6 9 4 7 4 2

v1[0] = v2[6]  Index 0 + 6 = 6
v1[1] = v2[5]  Index 1 + 5 = 6 
v1[6] = v2[0]  Index 6 + 0 = 6

Sum = vector_size - 1 

Generalisation 
v1[i] where i=last index
v2[j] where j=0

i + j = v.size - 1 
*/
#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std ;

void display( vector<int>&a){
    cout<<"Your New array is \n";
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i);
    }
}

int main(){
    vector<int>v1 ;
    
    int n ;
    cout<<"Enter the size of array : ";
    cin>> n ;

    cout<<"Enter the elements in the array : \n";
    for( int i=0; i<n ; i++){
        int x ;
        cin>>x ;
        v1.push_back(x);
    }
    
    display(v1);

    vector<int>v2(n); //v2 array of same size

    for( int i=0; i<v1.size()/* or n*/; i++){

        v2[i]=v1[n-1-i] ;
    }

    display(v2);

}