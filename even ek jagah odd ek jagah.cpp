#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int tempeve[n];
    int tempodd[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenCount = 0; // Count of even elements
    int oddCount = 0;  // Count of odd elements

    // Separate even and odd elements into respective arrays
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            tempeve[evenCount] = arr[i];
            evenCount++;
        } else {
            tempodd[oddCount] = arr[i];
            oddCount++;
        }
    }

    // Concatenate the arrays
    int temptot[n];
    for(int i = 0; i < evenCount; i++) {
        temptot[i] = tempeve[i];
    }
    for(int i = 0; i < oddCount; i++) {
        temptot[evenCount + i] = tempodd[i];
    }

    // Print the concatenated array
    for(int i = 0; i < n; i++) {
        cout << temptot[i] << " ";
    }

    return 0;
}
