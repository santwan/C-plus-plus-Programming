#include<iostream>
using namespace std ;
int main(){
    int x;
    int arr[x];
    cout<<"Enter The Size of the array: ";
    cin>>x ;

    cout<<"Enter elements of the array: ";
    for(int i=0; i<=x-1; i++){
        cin>>arr[i];
    }
    int sum =0 ;
    for(int j=0; j<=x-1; j++){
        sum = sum + arr[j];

} cout<<"The Sum of the array elements is "<<sum;
}