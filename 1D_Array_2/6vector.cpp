#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6); //Declaration + Initialization
    cout<<v.capacity()<<"  "<<v.size()<<endl;

    vector<int>v1(6,9); //Intial Size is 6 & Each element has value of 9
    cout<<v1.capacity()<<"  "<<v1.size()<<endl;
    cout<<v1[5];

    //HERE WE ARE USING VECTORS JUST LIKE A ARRAY. VECTOR HI EK ARRAY BAN CHUKA HAIN

    return 0;

    
}