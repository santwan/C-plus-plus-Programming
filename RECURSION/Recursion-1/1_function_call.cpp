#include<iostream>
using namespace std ;
void gun(){
  return ;
  cout<<"Hello Baby"<<endl;
  
}

void selfcalling_function(){
  cout<<"Example of self calling funtion";
  selfcalling_function();
  return;
}

void fun(){
  cout<<"Hello Guys"<<endl;
  gun(); //now fun function calling gun function
  return;
}

int main(){
  fun(); //main function calling fun function
  selfcalling_function();
}