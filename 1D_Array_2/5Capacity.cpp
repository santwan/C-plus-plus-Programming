#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(8); //1 1
    v.push_back(4); //2 2
    v.push_back(3); //4 3
    v.push_back(5); //4 4
    v.push_back(8); //8 5
    v.push_back(7); //8 6  
    v.push_back(8); //8 7
    v.push_back(5); //8 8
    v.push_back(2); //16 9
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(4);
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(0);
    v.push_back(0);
    v.push_back(9);
    cout<<"CAPACITY: "<<v.capacity()<<endl<<"SIZE: "<<v.size()<<endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"CAPACITY: "<<v.capacity()<<endl<<"SIZE: "<<v.size()<<endl;


}