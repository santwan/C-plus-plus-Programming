#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter Your X elemnt:";
    cin>>n;
    cout<<"ENter the size of the array";
    int x;
    cin>>x;
    int arr[x] ;
    cout<<"Enter The elements of array: ";
    for(int i=0; i<=x-1; i++){
        cin>>arr[i];
    }
    //Search
    //Check Mark
    bool flag=false ;
    for(int i=0; i<=x-1; i++){
        // if( arr[i]==n) cout<<"Present at INDEX NO: "<<i<<endl;
        if(arr[i]==n) flag=true ;

    }
    if(flag=true) cout<<"Present";
    else cout<<"404 element not found";
}