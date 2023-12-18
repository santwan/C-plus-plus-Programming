#include<iostream>
using namespace std ;

long long int addition( int n ){

	if(n==0) return 0;
    return (n+addition(n-1));
  
}

int main(){
	cout<<addition(9999);
}
