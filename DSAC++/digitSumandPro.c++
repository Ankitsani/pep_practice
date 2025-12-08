#include<iostream>
using namespace std;
    int addProduct(int n){
        int prod=1;
        int sum=0;
        while(n!=0){
            int digit=n%10;
            prod=prod*digit;
            sum=sum+digit;
            n=n/10;
        }
            //int answer=prod-sum;
           int answer=prod-sum;
           return answer;
        
    }
int main(){
    int n;
    cin>>n;
    cout<<addProduct(n)<<endl;
    cout<<addProduct(n)<<endl;

// int main() {
//     int num, sum = 0, product = 1, digit;
//     cin >> num;

//     // Processing each digit of the number
//     while (num > 0) {
//         digit = num % 10; // Extract last digit
//         sum += digit;     // Add to sum
//         product *= digit; // Multiply to product
//         num /= 10;        // Remove last digit
//     }

//     cout << "Sum of digits: " << sum << endl;
//     cout << "Product of digits: " << product << endl;

//     return 0;
// }


}