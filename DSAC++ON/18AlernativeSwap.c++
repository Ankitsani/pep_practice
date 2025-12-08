#include<iostream>
using namespace std;
void Alternative(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            //swap(arr[i], arr[i+1]);
            //without swap
            int temp=0;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Alternative(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
}