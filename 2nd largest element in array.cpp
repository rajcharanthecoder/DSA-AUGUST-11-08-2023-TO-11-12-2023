//Method-1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = arr[i];
        }
    }
    
    cout<<"The 2nd Largest Element is : "<<arr[1];
}
