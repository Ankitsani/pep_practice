#include<iostream>
using namespace std;

void ReverseString(char name[], int result) {
    int s = 0;
    int e = result - 1;
    while (s < e) {
        swap(name[s++], name[e--]);
    }
}

int GetLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];
    cin >> name;

    int result = GetLength(name);
    cout << "Length is this: " << result << endl;

    ReverseString(name, result);
    cout << "Reverse of String: " << name << endl;

    return 0;
}
