#include<iostream>
using namespace std;
int main() {
    int num, reversedNum = 0, R, S;
    cout << "Enter a number: ";
    cin >> num;
    S = num;
    while (num != 0) {
        R = num % 10;
        reversedNum = reversedNum * 10 + R ;
        num /= 10;
    }
    if (S == reversedNum) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
return 0;
}