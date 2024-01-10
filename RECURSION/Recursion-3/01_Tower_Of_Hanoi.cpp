#include<iostream>
using namespace std;

void Hanoi(int n, char a, char b , char c){
  if(n==0) return;
  Hanoi(n-1, a, c , b); //foe n-1 disk a is the source , b is the final destination and c is helper
  cout<<a<<" --> "<<c<<endl;
  Hanoi(n-1,b , a , c); // b is now the destination , a is the hel;per , c is the destination
}
int main(){
  int n= 3;
  Hanoi(n,'A','B','C');
}