#include<iostream>
using namespace std;
 
int main(){
    int i=5;
    int *ptr=&i;

    cout<<"address of this Pointer is: "<<ptr<<endl;//use for finding the address;
     cout<<"address of this Pointer is: "<<*ptr<<endl;//use for element value;
      cout<<"address of this Pointer is: "<<&ptr<<endl;//another method for finding address;
}