// method-1
#include <iostream>
using namespace std;
int main() {
    int num, reversedNum = 0;
    cout << "Enter an integer: ";
    cin >> num;
    while (num != 0) {
        int digit = num % 10; // Extract the last digit
        reversedNum = reversedNum * 10 + digit; // Add the digit to the reversed number
        num = num / 10; // Remove the last digit
    }
    cout << "Reversed number: " << reversedNum << endl;
    return 0;
}


