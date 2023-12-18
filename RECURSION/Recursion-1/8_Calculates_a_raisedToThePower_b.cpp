//Both a abd b are grreater than 0
//a to b means = a*a*a*a.... b times

#include<iostream>
using namespace std ;

// int power(int a , int b){
//   if(a==0 && b==0){
//     return -100;
//   }
//   if(a==0) return 0;

//   int p = 1 ;
//   for(int i = 1 ; i <= b ; i++){
//     p*=a;
//   }
//   return p;
// }

// int main(){
//   cout<<power(4,2);
    
//   }


/*
__________________________
Recursive thinking
**************************
3 to the power 5 
--> 3 * 3^4
--> 3 * 3^3
--> 3 * 3^2
--> 3 * 3^1
--> a * a^(b-1)

--> Base Case : if(b==0) return 1 else return = a * power(a,b-1)

*/

int powerRecursive(int a , int b){
  if( b==0 ) return 1;
  else return a*powerRecursive(a,b-1);
}


int main(){
  cout<<powerRecursive(5,3);
}
