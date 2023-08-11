//sort the array//

#include<iostream>
using namespace std;
void merge(int arr[],int left,int middle,int right){
    int n1 = middle-left+1;
    int n2 = right-middle;
    int leftarr[n1];
    int rightarr[n2];
    for(int i = 0;i<n1;i++){
        leftarr[i] = arr[left+i];
    }
    for(int i = 0;i<n2;i++){
        rightarr[i] = arr[middle+1+i];
    }
    
    int i = 0,j = 0,k = left;
    while(i<n1 && j<n2){
        if(leftarr[i]<=rightarr[j]){
            arr[k] = leftarr[i];
            i++;
        }else{
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }
    
    if(i<n1){
        arr[k] = leftarr[i];
        k++;
        i++;
    }
    
    if(j<n2){
        arr[k] = rightarr[j];
        k++;
        j++;
    }
    
}
void mergesort(int arr[],int left,int right){
    int mid;
    if(left<right){
        mid = left + (right-left)/2;
    
    
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left,mid,right);
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    
    return 0;
}
