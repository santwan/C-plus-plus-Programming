#include<iostream>
using namespace std ;

void print(int n){

  print(n-1);
  if(n<1)cout<<n;

}
int main(){
  print(6);
}