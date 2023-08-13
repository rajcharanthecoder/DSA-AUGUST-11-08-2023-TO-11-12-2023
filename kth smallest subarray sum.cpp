#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    vector<int> sums; // Store the calculated sums
    for (int i = 0; i < n; i++) {
        int sum = 0; // Initialize sum for each subarray
        for (int j = i; j < n; j++) {
            sum += vec[j];
            sums.push_back(sum);
        }
    }
    
   
   
    cout << sums[k]; // Output the kth smallest sum

    return 0;
}
