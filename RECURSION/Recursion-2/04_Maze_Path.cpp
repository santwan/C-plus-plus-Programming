/*
SEE PAGE NO : 16
*/

#include<iostream>
using namespace std;

int Maze(int sr , int sc , int er, int ec) {
  if( sr > er || sc > ec ) return 0;
  if( sr == er && sc == ec) return 1;
  int rightway = Maze(sr, sc+1, er, ec);
  int downway = Maze(sr+1,sc,er,ec);
  int totalway = rightway+downway;
  return totalway;
}

//If you want to print the path also


void MazePath(int sr , int sc , int er , int ec, string s){
  if(sr > er || sc > ec) return;
  if(sr==er && sc==ec){
    cout<<s<<endl;
    return;
  }
  MazePath(sr,sc+1,er,ec,s+"R");
  MazePath(sr+1,sc,er,ec,s+"D");
}

int main(){
  int n=5;
  cout<<Maze(1,1,n,n)<<endl;
  MazePath(1,1,n,n,"");
}