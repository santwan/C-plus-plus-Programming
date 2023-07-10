#include<iostream>
using namespace std;
int main(){
    int arr[]={4,6,7,8,2};
    int size= sizeof(arr)/sizeof(arr[0]) ;

    int* ptr = arr; // Giving adress
    //int* ptr = &arr;//WRong way to write
    // int* ptr = &arr[0] ;
    //int * ptr = arr[0]; //Gives Error
    cout<<ptr<<endl;
    
    cout<<&arr[0]; //Both are same things
    cout<<endl<<ptr[0];
    cout<<endl;
    for(int i=0; i<=size-1; i++){
        cout<<ptr[i]<<" " ; //wE CAN ALSO PRINT THE WHOLE ARRAY USING PTR
        //Pointer ke pass puri aukat hain 
    }
    ptr[0]=30;
    ptr[4]=0;  // *ptr[4]=0; Both are same . we can declair this pointers by using any one of this
    cout<<endl;
    for(int i=0; i<=size-1; i++){
        cout<<ptr[i]<<" " ;
    }
    //Conclusion - A pointer  can  have acces to the entire array
    //we can modify update and do eveything eith  the array using pointers

    //Lets take an example
    //change the elemtns of the array not using array nor ptr[] like this way

    *ptr = 7 ; //by default it indicates the change in the first elements of the array
    ptr++;
    // *ptr=54;
    // ptr++;
    // *ptr=8;
    cout<<endl;
    for(int i=0; i<=size-1; i++){        //for(int i=0; i<=size-1; i++){
        cout<<*ptr<<" ";                 //         cout<<ptr[i}<<" ";
        ptr++;                           //           }
    }
    ptr = arr ;


    return 0;
}