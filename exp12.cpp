#include<iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 3 == 0) {
        if (num % 5 == 0) {
            cout << "Divisible by 3 and 5" << endl;
        } else {
            cout << "Divisible by 3 but not by 5" << endl;
        }
    } else {
        if (num % 5 == 0) {
            cout << "Divisible by 5 but not by 3" << endl;
        } else {
            cout << "Not divisible by 3 or 5" << endl;
        }
    }
return 0;
}