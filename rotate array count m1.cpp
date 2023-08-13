#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[n];
    }
    int min = INT_MAX;
    int min_index = 0;
    
    for(int i = 0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
            min_index = i;
        }
    }
    
    cout<<min_index;
}
