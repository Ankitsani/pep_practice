#include<iostream>
using namespace std;
bool isPresent(int arr[][100], int find,int n1, int n2){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr[i][j]==find){
                return 1;
            }
        }
        
    }
    return 0;

}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int arr[100][100];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    int find;
    cin>>find;
    if(isPresent(arr, n1,n2,find)){
        cout<<"Element is founded: "<<endl;
    }
    else{
        cout<<"Not founded: "<<endl;
    }

}