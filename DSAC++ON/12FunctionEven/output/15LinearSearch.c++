#include<iostream>
using namespace std;
bool Search(int arr[], int n, int find){
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            return 1;
        }
        
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
     int arr[n];
        for(int i=0;i<n;i++){
        cin>>arr[i];
     }
    int find;
     cin>>find;
     bool found=Search(arr,n,find);
     if(found){
        cout<<"YES";
     }
     else{
        cout<<"NO";
     }
}