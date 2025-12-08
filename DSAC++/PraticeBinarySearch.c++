#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int find;
    cin>>find;
    int s=0;
    int e=n-1;
    
    bool found=false;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==find){
            cout<<mid<<" ";
            break;
        }
        else if(arr[mid]<find){
            s=mid+1;
            
        }
        else{
            e=mid-1;
        }
        
    
    }

    
   
    
    
    

}