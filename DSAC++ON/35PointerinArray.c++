#include<iostream>
using namespace std;
int main(){
    int arr[5]={2, 3,4,6,7};
    cout<<"address of the first element is: "<<&arr[0]<<endl;//use for addresss
    cout<<"Element of the first index: "<<arr[0]<<endl;//use  for element;
    cout<<"Address of the first element is: "<<&arr[0]<<endl;//another method finding the address
    cout<<"first elemnt is: "<<*arr<<endl;
    cout<<"Socond element is: "<<*arr+1<<endl;
    cout<<"third elemtn is: "<<*arr+2<<endl;
    cout<<"Element is: "<<(*arr)+1<<endl;
    int i=4;
    cout<<"Element of whatever you want: "<<arr[i]<<endl;
    cout<<"Element whatever you want: "<<i[arr]<<endl;
}