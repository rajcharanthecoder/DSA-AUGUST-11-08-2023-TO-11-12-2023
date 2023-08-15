#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int low = 0;
    int high = n - 1;
    int mid = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;  // Increment mid here
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
