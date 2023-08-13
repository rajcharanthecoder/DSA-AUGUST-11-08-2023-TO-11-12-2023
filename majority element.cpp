#include<iostream>
using namespace std;
int main(){
    int n;
    int index = 0;
    int maxcount = 0;
    int count = 0;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        
        if(count>n/2){
            maxcount = count;
            index = i;
        }
    }
    
    cout<<arr[index];
}

