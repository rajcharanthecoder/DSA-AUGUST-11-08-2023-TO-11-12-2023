#include<iostream>
using namespace std;
void leftRotateArray(int arr[],int d,int n){
    d = d%n; // if d>n
    for(int i = 0;i<n;i++){
        cout<<arr[(i+d)%n]<<" ";
    }
}
void rightRotateArray(int arr[],int d,int n){
    d = d%n;
    for(int i = 0;i<n;i++){
        cout<<arr[(i+n-d)%n]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int d;
  
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
      cin>>d;
    
    leftRotateArray(arr,d,n);
   
    cout<<endl;
    rightRotateArray(arr,d,n);
    
}
