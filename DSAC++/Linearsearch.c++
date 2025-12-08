#include<iostream>
using namespace std;
bool linearsearch(int arr[], int n, int f){
    for(int i=0;i<n;i++){
        if(arr[i]==f){
            return 1;
        }
    }
    return 0;
}
int main(){
    
    int arr[5]={2,5,7,8,4};
    int f;
    cin>>f;
    bool found=linearsearch(arr, 5, f);
    if(found){
        cout<<"yes";
    } 
    else{
        cout<<"no";
    }
}
    