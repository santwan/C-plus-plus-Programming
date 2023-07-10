//array ->        2 4 6 8 4 0
//Reversing ->    0 4 8 6 4 2
//Reverse(1,3)->  0 6 8 4 4 2
//It is a very good example

#include<bits\stdc++.h>
#include<vector>
using namespace std ;

void reverse_part_array( int i , int j , vector<int>&v ){
    while(i<=j){
        int temp = v[i] ;
        v[i] = v[j];
        v[j] = temp ;
        i++ ;  j--;
    }
}

void display_array( vector<int>&v){
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
}

void input_array( vector<int>&v , int n ){
    cout<<"Enter the elements of the array : \n";
    for(int i=0; i<n ; i++){
        int x ;
        cin>> x ;
        v.push_back(x);
    }
}

int main(){
    vector<int>v;

    cout<<"Enter the size of the array : ";
    int n ; cin>>n ;
    input_array(v,n) ;

    cout<<"Your Array is : \n";
    display_array(v) ;
    
    int i, j ;
    cout<<"\nEnter range of INDEX NO of array of which you want to reverse \n";
    cout<<"Range : 0 to "<<(n-1)<<endl;
    cin>> i >> j ;

    reverse_part_array( i , j, v);

    cout<<"Your Partly reverse array is : \n";
    display_array(v);
}