#include<iostream>
using namespace std;

void SumOfRow(int arr[][3], int n1, int n2) {
    for(int i = 0; i < n1; i++) {
        int sum = 0;  // move inside loop to reset for each row
        for(int j = 0; j < n2; j++) {
            sum += arr[i][j];
        }
        cout<< sum << endl;
    }
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int arr[n1][3];  // fixed 3 columns
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    SumOfRow(arr, n1, 3);

    return 0;
}
