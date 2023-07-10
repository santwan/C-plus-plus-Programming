//Reversing array without using extra array

/*
vector v -->  2 6 7 3 9 0 

v[0] = v[5]  2 = 0   9
v[1] = v[4]  6 = 9
v[2] = v[3]  7 = 3
So basically we are doing SWAPING OF NUMBERS 
------------------- Rversing process Complete
v[i] = v[j]  So we can see i always less than j
i.e  loop condition = i<j

*/

#include<bits\stdc++.h>
using namespace std ;

int main(){
    vector<int>v ;
    int n ;

    cout<<"Enter size of the array : ";
    cin>>n ;
    
    for( int i=0 ; i<n; i++){
        int x ;
        cin>>x ;
        v.push_back(x);
    }

    cout<<"Your Array is : \n";
    for( int i=0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    int i=0;
    int j=n-1;
    while(i<=j){
        int temp = v[i] ;
        v[i]=v[j];
        v[j]=temp;
        i++ ;
        j--;
    }

    // //uSING FOR LOOPS
    // for(int i=0, j=v.size()-1 ; i<=j ; i++,j-- ){
    //     int temp=0 ;
    //     temp = v[i] ;
    //     v[i] = v[j];
    //     v[j] = temp ;
    // }
    cout<<"\nYour Reverse array is : \n";

    for( int i=0; i<n ; i++){
        cout<<v.at(i)<<" ";
    }
}