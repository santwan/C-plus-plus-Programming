#include<iostream>
#include<vector> //Vector is a dynamic array
using namespace std;
int main(){
    vector<int> v;  //You need not mention then size
    //inserting / During INPUT Dont  use [] brackets
    v.push_back(8);
    v.push_back(4);
    v.push_back(8);
    v.push_back(5);

    //if YOU WANT TO UPDATE/ACCESS , THEN YOU WILL USE []
    cout<<v[0];  
    cout<<v[1];

    v[2]=5;  //changing the elements in the vector
  
    cout<<v[2];
    cout<<v[3];

    //Vector Size
    v.push_back(8);
    cout<<v.size()<<endl;
    v.push_back(4);
    cout<<v.size()<<endl;
    v.push_back(8);
    cout<<v.size()<<endl;
    v.push_back(5);
    cout<<v.size()<<endl;

    //Vector Capacity
    v.push_back(8);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;

    return 0 ;

}