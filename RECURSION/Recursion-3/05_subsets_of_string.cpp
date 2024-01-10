#include<bits/stdc++.h>
using namespace std ;

void printSubset(string set , string original ){

  if(original.length() == 0 ){
    cout<<"'"<<set<<"'"<<endl ;
    return;
  }

  char firstChar = original[0];
  printSubset( set+firstChar , original.substr(1) );
  printSubset( set, original.substr(1));
}

//Solve this same problem using INDEX instead of substring menthod 

void printSubsetIndexMethod(string set , string original, int index){

  if(index == original.length()){
    cout<<"'"<<set<<"'"<<endl ;
    return;
  }
  
  char firstChar = original[index];
  printSubsetIndexMethod( set+firstChar , original, index+1 );
  printSubsetIndexMethod( set, original , index+1);
}

void storeSubset(string set , string original , int index , vector<string>&v ){
  // Base case: if the end of the string is reached, add the current subset to the array
  if(index == 0){
    v.push_back(set);
  }

  // Include the current character and recurse with the next index
  char firstChar = original[index];
  storeSubset(set+firstChar, original , index+1 , v);
  // Exclude the current character and recurse with the next index
  storeSubset(set , original , index+1 , v );
}

int main(){
  string str = "abc";
  // printSubset("", str);
  // printSubsetIndexMethod("",str,0);

  // Create a vector to store subsets
  vector<string>v ;
  storeSubset("", str , 0 , v);
  for( string ele : v){
    cout<<ele<<endl;
  }

}

