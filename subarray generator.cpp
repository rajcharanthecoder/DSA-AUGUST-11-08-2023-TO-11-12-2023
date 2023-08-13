#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << "[";
            for (int k = i; k <= j; k++) {
                cout << arr[k];
                if (k < j) {
                    cout << ",";
                }
            }
            cout << "]";
        }
    }

    return 0;
}
