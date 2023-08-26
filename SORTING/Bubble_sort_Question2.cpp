// Push zeroes to end while mainatning the relatiive order of other elements 

#include<bits\stdc++.h>

using namespace std ;

int main (){
    vector<int> v = {2,0,4,5,0,2,6,0,6,0,0,5,6} ;

    for( int i = 0 ; i< v.size() -1 ; i++ ){

        for( int j=0 ; j<v.size()-1-i ; j++ ){
            if(v[j] == 0 ){
                swap( v[j] , v[j+1] );
            }
        }
    }

    for( int i =0 ; i< v.size() ; i++ ){
        cout<<v.at(i)<<" ";
    }
}