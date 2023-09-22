#include<iostream>
#include<vector>
using namespace std;
int smalllargesum(int*arr,int n){
    if(n<3) return 0;
    vector<int>arreve,arrodd;
    for(int i = 0;i<n;i++){
        if(i%2==0) arreve.push_back(arr[i]);
        else arrodd.push_back(arr[i]);
    }
    
    sort(arreve.begin(),arreve.end());
    sort(arrodd.begin(),arrodd.end());
    
    return arrodd[1]+arreve[1];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<smalllargesum(arr,n);
}
