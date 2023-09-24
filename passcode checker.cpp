#include <iostream>
#include <cstring>
using namespace std;

int CheckPassword(char str[]) {
    int len = strlen(str);
    bool isDigit = false, isCap = false, isSlashSpace = false, isNumStart = false;

    // RULE 1: At least 4 characters in it
    if (len < 4)
        return 0;

    for (int i = 0; i < len; i++) {
        // RULE 2: At least one numeric digit in it
        if (str[i] >= '0' && str[i] <= '9') {
            isDigit = true;
        }
        // RULE 3: At least one Capital letter 
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            isCap = true;
        }
        // RULE 4: Must not have space or slash
        if (str[i] == ' ' || str[i] == '/')
            isSlashSpace = true;
    }

    // RULE 5: Starting character must not be a number
    isNumStart = (str[0] >= '0' && str[0] <= '9');

    // FYI: In C++, if int data type function returns true, then it prints 1, 
    // and if false, then it prints 0
    return isDigit && isCap && !isSlashSpace && !isNumStart;
}

int main() {
    char password[100];
    cout << "Enter the Password: ";
    cin >> password;
    cout << "The output is: " << CheckPassword(password) << endl;

    return 0;
}
