//Count Duplicates//

#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cin>>n;
    int arr[n];
    for(int  i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]==arr[j]){
               count++;
            }
        }
    }
    cout<<count;
}
