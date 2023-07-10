//WRITING A C PROGRAMME TO FIND MAXIMUM BETWEEN TWO NUMBER
#include<iostream>
using namespace std ;
int main(){
    float input_num1, input_num2 ; 

    cout<<" FINDING THE MAXIMUM  BETWEEN TWO NUMBER "<<endl;
    cout<<"___________________________________________"<<endl;
    cout<<" ENTER ANY TWO NUMBER "<<endl;
    cin>> input_num1 ;
    cin>> input_num2 ;
    if ( input_num1>input_num2 )
    { cout<<" Maximum number is "<<  input_num1 <<endl;}
    else cout<<" Maximum Number is "<< input_num2 <<endl;

    return 0 ; 

}