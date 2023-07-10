//WAP TO SUM THE TWO MATICES 

#include<bits/stdc++.h>
using namespace std ;

const int MAX_COLOMNS = 100 ;
const int MAX_ROWS = 100 ;

void input(int x, int y, int a[][MAX_COLOMNS]){
    for( int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin>>a[i][j] ;
        }
    }
}

int main(){

    int m1 , m2 , n1 , n2 ;
    int m , n , flag=1 ;

    do{
    cout<<"Enter No of Rows and Colomns for First MAtrix  : ";
    cin>>m1>>n1 ;

    cout<<"ENter no of Rows and Colomns for Second MAtrix : ";
    cin>>m2>>n2 ;

    if(m1==m2 && n1==n2){
        cout<<"\nAddition Possible";
        flag = 0 ;
        break ;
    } 
    else{ cout<<"Addition Not Possible "<<"\n Enter Inputs Again\n" ; } 
    }
    while(flag != 0) ;

    int matrix_1[MAX_ROWS][MAX_COLOMNS] ;
    int matrix_2[m2][n2] ;

    input(m1, n1, matrix_1) ;
    
}