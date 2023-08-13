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
    int min_index = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]>arr[i+1] && i+1<n){
            min_index = i+1;
        }
    }
    
    cout<<min_index;
}
