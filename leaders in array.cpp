#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int j;
        for (j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                break;
            }
        }
        if (j == n) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
