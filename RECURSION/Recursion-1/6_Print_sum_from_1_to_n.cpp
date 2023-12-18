#include<iostream>
using namespace std ;

void addition( int sum , int n ){

	if(n==0){
		cout<<sum<<endl;
		return;
	}
	addition( sum+n , n-1);
  
}

int main(){
	addition(0,4);
}