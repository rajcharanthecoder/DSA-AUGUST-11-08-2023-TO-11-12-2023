#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int charToDigit(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else if (c >= 'A' && c <= 'F') {
        return 10 + (c - 'A');
    } else if (c >= 'a' && c <= 'f') {
        return 10 + (c - 'a');
    } else {
        cerr << "Invalid character in input: " << c << endl;
        exit(1);
    }
}

int main() {
    string input;
    cin >> input;
    int base;
    cin >> base;
    
    int decimal = 0;
    int power = 0;
    
    // Iterate through the input string in reverse
    for (int i = input.size() - 1; i >= 0; i--) {
        char c = input[i];
        int digit = charToDigit(c);
        decimal += digit * pow(base, power);
        power++;
    }
    
    cout << decimal << endl;
    
    return 0;
}
