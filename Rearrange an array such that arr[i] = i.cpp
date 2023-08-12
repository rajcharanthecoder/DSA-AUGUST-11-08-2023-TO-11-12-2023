#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        while (arr[i] != -1 && arr[i] != i) {
            int temp = arr[i];
            arr[i] = arr[temp];
            arr[temp] = temp;
        }
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
