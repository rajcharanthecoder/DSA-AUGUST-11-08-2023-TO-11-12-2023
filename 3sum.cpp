#include<iostream>
using namespace std;
int main(){
    int n;
    int l,r;
    int sum = 0;
    int index = 0;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int flag = 0;
    cin>>sum;
    for(int i = 0;i<n;i++){
        l = i+1;
        r = n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r] == sum) {
               cout<<"Triplet is : "<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
               l++;
               r--;
            }
            else if(arr[i]+arr[l]+arr[r]<sum) l++;
            else r--;
        }
    }
}
