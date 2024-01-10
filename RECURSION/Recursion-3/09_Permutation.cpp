#include<bits/stdc++.h>
using namespace std ;

void permutation(string ans , string original){

  if(original.length()==0){
    cout<<ans<<endl;
    return;
  }

  for(int i = 0 ; i<original.length(); i++){
    char ch = original[i];
    string left = original.substr(0,i);
    string right = original.substr(i+1);
    permutation(ans+ch, left+right);
  }
  

}

int main(){

  string ans = "" ;
  string str = "abc";

  permutation(ans, str);
  
}