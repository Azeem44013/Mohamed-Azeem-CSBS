#include<iostream>
using namespace std;
int main() {
    int arr[] = {23,24,29,30,31,32,33,34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    cout << "Sum of Even: " << sumEven << ", Sum of Odd: " << sumOdd << endl;
return 0;
}