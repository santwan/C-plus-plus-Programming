#include<iostream>
#include<vector>
using namespace std ;

int main(){
    vector<int> v(12) ;

    cout<<"Enter the Elements in sorted order :";
    for( int i = 0 ; i<v.size() ; i++ ){
        cin>>v.at(i);
    }

    int first_index = 0 ;
    int last_index = v.size()-1 ;

    cout<<"Enter the target element :";
    int target ; cin>>target ;
    

    while( first_index <= last_index ){
        int mid_index = (first_index+last_index)/2 ;

        if( v[mid_index] == target ) cout<<mid_index ;
        if( v[mid_index] > target ) last_index = mid_index - 1 ;
        if( v[mid_index] < target ) first_index = mid_index + 1 ;
    }


}