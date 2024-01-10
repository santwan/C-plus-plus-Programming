#include<bits/stdc++.h>
#include<string>

using namespace std;

// void removeAchar( string ans, string original){
//   if(original.length()==0){
//     cout<<ans ;
//     return;
//   }
//   char ch = original[0];
//   if(ch=='o') removeAchar(ans, original.substr(1)) ;
//   else removeAchar(ans+ch , original.substr(1));
// }

void removeAchar( string ans, string original , int index){
  if(index == original.length()){
    cout<<ans;
    return;
  }
  char ch = original[index];
  if(ch=='o') removeAchar(ans, original , index+1) ;
  else removeAchar(ans+ch , original, index+1);
}

int main(){

  string str = "Helleo Billooorpp";
  removeAchar("", str, 0);

}