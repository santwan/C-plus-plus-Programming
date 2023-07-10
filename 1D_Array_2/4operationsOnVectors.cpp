#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(8);
    v.push_back(5);
    v.push_back(8);
    v.push_back(4);
    v.push_back(8);
    v.push_back(5);
    for( int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    v.pop_back(); //Deleting The last element
    v.pop_back(); //Due to popback, automatically Size decreaes
                  //But Capacity donot change
    for( int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}