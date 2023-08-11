#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    cin>>sum;

    for(int i = 0;i<n;i++){
        int currentsum = arr[i];
        if(currentsum == sum){
            cout<<"Indices at : "<<i<<endl;
        }else{
            for(int j = i+1;j<n;j++){
                currentsum+=arr[j];
                
                if(currentsum == sum){
                    cout<<"Sum found between indices " <<i<<"and"<<j<<endl;
                }
            }
        }
    }

    return 0;
}
