/*
''''|__
       |__
          |__
             |__
                |__
                   |__    Ground Floor 

SEE PDF PAGE NUMBER : 13

*/

#include<iostream>
using namespace std ;

int  stair(int n){
  if(n==2) return 2;
  else if(n==1) return 1;
  return stair(n-1) + stair(n-2);
}

int main(){
  int n = 5;
  cout<<stair(n);
}
