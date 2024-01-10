/*
Step 1 : Sort the string
Step 2 : 


*/

#include<bits/stdc++.h>
using namespace std ;

void storeSubset(string ans , string original , vector<string>&v , bool flag){

  if(original.length() == 0 ){
    v.push_back(ans);
    return;
  }

  char firstChar = original[0];
  

  if(original.length()==1){
    if(flag==true)storeSubset(ans+firstChar, original.substr(1) , v , true);
    storeSubset(ans, original.substr(1), v , false);
    return;
  }

  char secondChar = original[1];
  if(firstChar==secondChar){

      if(flag==true)storeSubset(ans+firstChar, original.substr(1) , v , true);
      storeSubset( ans , original.substr(1), v , false);
  }
  else {
      if(flag==true)storeSubset(ans+firstChar, original.substr(1) , v , true);
      storeSubset( ans , original.substr(1), v , true);
  }

}

int main(){
  string str = "aab";

  vector<string>v ;

  storeSubset("", str , v , true);

  for( int i = 0 ; i<v.size(); i++ ){
    cout<<v.at(i)<<endl;

  }
}