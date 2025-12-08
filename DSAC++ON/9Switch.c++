#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    switch(n){
        case 1:{
            cout<<"First Number: ";
            break;
        }
        case 2:{
            cout<<"Second Number: ";
            break;
        }
        case 3:{
            cout<<"Third Number: ";
            break;
        }
        case 4:{
            cout<<"Fouth Number: ";
            break;
        }
        case 5:{
            cout<<"Fifth Number: ";
            break;
        }
        default:{
            cout<<"It is default case: ";
            break;
        }

    }
}