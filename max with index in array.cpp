#include<bits/stdc++.h>
using namespace std;
void findmax(int arr[],int length){
    int max = -1,maxIndex = -1;
    for(int i = 0;i<length;i++){
        if(arr[i]>max){
            max = arr[i];
            maxIndex = i;
        }
    }
    cout<<max<<maxIndex;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    findmax(arr,n);
}
