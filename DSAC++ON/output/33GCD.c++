#include<iostream>
using namespace std;
int GCD(int a, int b){
    if(a==0){
        return b;
    }
    else{
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a, b;
    cin>>a>>b;
    int ans=GCD(a,b);
    cout<<"Anser of GCD is: "<<ans<<endl;

}