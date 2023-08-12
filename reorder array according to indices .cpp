#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    int index[n];
    int temp[n] = {}; // Initialize temp array to 0
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for(int i = 0;i<n;i++){
         cin >> index[i];
    }
    
    for(int i = 0; i < n; i++) {
        temp[index[i]] = arr[i];
    }
    
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i]; // Use temp array to rearrange the values
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
