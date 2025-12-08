#include<iostream>
using namespace std;
 int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Nonzero=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j], arr[Nonzero]);
            Nonzero++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }