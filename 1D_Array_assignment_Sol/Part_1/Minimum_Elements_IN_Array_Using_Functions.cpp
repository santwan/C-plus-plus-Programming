

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

int minimum( int a , int b ){
    if( a < b ) 
        return  a ; 
    else return b ; 
}

int main(){
    vector<int> v ;

    cout<<"Enter the size of the array" ;
    int n ; cin>> n ;

    input_array(n , v) ;

    display_array(v);
    
    int mini = INT_MAX;

    for( int i = 0 ; i<n ; i++){
        mini = minimum(v[i], mini);
    }

    cout<<endl<<"Your Min elements iny the array :"<< mini ;

}