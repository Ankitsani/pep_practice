#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int find) {
    int s = 0;
    int e = n - 1;  // Corrected upper bound
    int mid;

    while (s <= e) {
        mid = s + (e - s) / 2;

        if (arr[mid] == find) {
            return mid;  // Element found, return index
        }
        if (arr[mid] < find) {
            s = mid + 1;  // Search in right half
        } else {
            e = mid - 1;  // Search in left half
        }
    }
    return -1;  // Element not found
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int find;
    cout << "Enter the element to search: ";
    cin >> find;

    int key = BinarySearch(arr, n, find);

    if (key != -1) {
        cout << "Element found at index: " << key << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
