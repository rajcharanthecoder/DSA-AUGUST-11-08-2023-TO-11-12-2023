//Method-1

//Removing duplicates From Arrays

#include<iostream>
using namespace std;
int main(){
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] == arr[j]){
                for(int k = j;k<n;k++){
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
