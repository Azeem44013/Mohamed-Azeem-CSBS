#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int start, end;
    cout << "Enter the range (start and end): ";
    cin >> start >> end;
    cout << "Armstrong numbers between " << start << " and " << end << " are: ";
    for (int num = start; num <= end; ++num) {
        int sum = 0, temp = num, digits = 0;
        while (temp != 0) {
            temp /= 10;
            digits++;
        }
        temp = num;
        while (temp != 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }
        if (sum == num) {
            cout << num << " ";
        }
    }
    cout << endl;
return 0;
}