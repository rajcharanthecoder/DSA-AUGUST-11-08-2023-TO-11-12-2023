#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int temp[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    int small = 0;
    int flag = true;
    int large = n-1;
    
    for(int i = 0;i<n;i++){
        if(flag){
            temp[i] = arr[large--];
        }else{
            temp[i] = arr[small++];
        }
        
        flag = !flag;
    }
    for(int i = 0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    
}
