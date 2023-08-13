#include <iostream>
#include <unordered_set>
using namespace std;

void findPairsWithSum(int arr[], int n, int target) {
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        
        if (seen.find(complement) != seen.end()) {
            cout << "Pair: " << complement << " " << arr[i] << endl;
        }

        seen.insert(arr[i]);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    findPairsWithSum(arr, n, target);

    return 0;
}
