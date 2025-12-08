#include<iostream>
#include<climits> // Required for INT_MIN and INT_MAX
using namespace std;

int getMax(int arr[], int n){
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n){
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int result = getMax(arr, n);
    cout << "Maximum: " << result << endl;

    int result1 = getMin(arr, n);
    cout << "Minimum: " << result1 << endl;

    return 0;
}
