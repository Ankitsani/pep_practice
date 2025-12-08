#include<iostream>
using namespace std;
int getMax(int arr[], int n){
    int INT_MIN=1;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int n1 = getMax(arr, n);
    cout<<n1;
}
    