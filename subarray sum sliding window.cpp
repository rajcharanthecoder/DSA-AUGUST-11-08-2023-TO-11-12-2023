#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int k = 3;  // Subarray length
    int sum = 0;
    
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }
    
    int maxSum = sum;
    int i = 0;
    int j = k;
    
    while (j < n) {
        sum = sum - arr[i] + arr[j];
        i++;
        j++;
        maxSum = max(maxSum, sum);
    }
    
    cout << maxSum;

    return 0;
}
