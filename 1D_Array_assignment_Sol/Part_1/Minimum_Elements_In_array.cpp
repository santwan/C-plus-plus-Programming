// Find the minimum value out of all elements in the array.

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

int minimum_element_in_array(vector<int>&v){
    int min = v[0] ;
    for(int i = 0 ; i<v.size() ; i++){
         if(min>v[i] ) min = v[i] ;
        }
    return min ;
}

int main(){
    vector<int> v ;

    cout<<"Enter the size of the array" ;
    int n ; cin>> n ;

    input_array(n , v) ;

    display_array(v);

    cout<<endl<<"Your Min elements iny the array :"<< minimum_element_in_array(v) ;

}