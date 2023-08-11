#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    int count = 0;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for (int k = j + 1; k < n; k++){
                if((arr[i]+arr[j]>arr[k]) && (arr[j]+arr[k]>arr[i]) && (arr[i]+arr[k]>arr[j])) count++;
            }
            
        }
    }
    
    cout<<count;
}
