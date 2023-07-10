#include<iostream>
#include<vector>
using namespace std;
int main(){
//METHOD NO 1 
//---------------------------------------------------------
    vector<int>v(8); //You need to give declaration otherwise segmentationn fault.
    for( int i=0; i<v.size();i++){
        cin>>v[i];
    }

//METHOD NO 2
//---------------------------------------------------------
    vector<int>a ;
    for(int i=0; i<6; i++){
        int x ;
        cin>>x;
        v.push_back(x);
    }


    return 0;

}