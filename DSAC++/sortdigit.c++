#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int freq[10] = {0};   // frequency array for digits 0–9

    // count digits using while loop
    while (n > 0) {
        int d = n % 10;
        freq[d]++;
        n /= 10;
    }

    // rebuild the number in sorted order (ascending)
    for (int i = 0; i < 10; i++) {
        while (freq[i] > 0) {
            cout << i;
            freq[i]--;
        }
    }

    return 0;
}
