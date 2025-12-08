#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int find){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        int mid = s + (e - s) / 2;  // Better mid calculation
        if(arr[mid] == find){
            return mid;
        }
        if(find > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int find;
    cin >> find;

    int result = BinarySearch(arr, n, find);
    if(result != -1){ 
        cout << "Yes, it is found at index: " << result << endl;
    }
    else{
        cout << "Element not found." << endl;
    }

    return 0;
}
