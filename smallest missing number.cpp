#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main() {
    int n;
    int missi;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i = 0;i<n;i++){
        if(arr[i]!=i){
            missi = i;
            break;
        }
    }
    
    cout<<missi;
}
