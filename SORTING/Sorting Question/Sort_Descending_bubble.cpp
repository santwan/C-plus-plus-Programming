
#include<bits/stdc++.h>

using namespace std ;

int main(){
    vector<int> v(5) ;
    v = {3 , 5 , 9 ,4 , 1} ;

    for( int i = 0 ; i < v.size()-1 ; i++ ){

        for( int j = 0 ; j < v.size() - i - 1  ; j++ ){
            if( v[j] < v[j+1] ){
                swap(v[j], v[j+1] );
            }
        }
    }

    for( int i = 0 ; i< v.size() ; i++ ){
        cout<< v[i] <<" " ;
    }
}