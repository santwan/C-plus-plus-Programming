#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter NUmber of Students :";
    cin>>x;

    int marks[x];
    cout<<"ENter Marks Students: "<<endl;
    for (int i=0; i<=x-1; i++){
        cin>>marks[i];
    }

    cout<<"Marks of student whoese marks is below 35 : ";
    for( int i=0; i<=x-1; i++){
        if (marks[i]<35) cout<<i<<" "; 
    }
}