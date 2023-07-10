//Section 8
/* Increment operator ++ 
Decrement operator --

increment or decrement its operand by 1 
can be used with integers , floating point types and pointers 

Prefix ++num
Postfix num++

DONOT OVERUSE THIS OPERATOR 
ALERT!! NEVER USE IT TWICE FOR THE SAME VARIABLE IN THE SAME STATEMENT 
*/
#include<iostream> 
using namespace std ; 
int main() { 

   int counter {10};
   int result {0};
    
// EXAMPLE 1 - Simple Increment 
   /* cout <<" counter :"<< counter << endl ;
    counter = counter + 1 ;
    cout<< " counter : " << counter << endl; 
    */
    
    //counter++ ;
    //cout<< " counter " << counter << endl;

   // ++counter ;
   // cout<< "counter " << counter << endl; 

 // EXAMPLE 2 - Preincrement 
    /*
    counter = 10 ; 
    result = 0 ;  

    cout<<" counter : "<< counter << endl;
    cout<<" result :"<< result << endl; 

    result= ++counter; //Note the Preincrement 
    cout <<" counter: "<< counter << endl; 
    cout<<" Result :"<< result<<endl;
    */

  //EXAMPLE 3 - POST-INCREMENT 
    /*
    counter = 10;
    result = 0;
    
    cout<<" counter :"<< counter<<endl; 

    result=counter++ ; //note the post increment 
    cout<<" Counter :"<< counter <<endl;
    cout<<" Result : "<< result<< endl; 
    */

 //EXAMPLE 4 
   /*
   counter =10 ;
   result= 0 ;

   cout<<" Counter :"<< counter <<endl;

   result = ++counter + 10 ;
   cout<<" counter :"<< counter << endl;
   cout<<"Result :"<< result << endl;
   */

 //EXAMPLE 5
   counter= 10;
   result= 0;

   cout<<" Counter :"<< counter <<endl;
   
   result= counter++ + 10;
   cout<<" Counter :"<< counter <<endl;
   cout<<" Result  :"<< result <<endl;

    
    










    return 0 ; 

}