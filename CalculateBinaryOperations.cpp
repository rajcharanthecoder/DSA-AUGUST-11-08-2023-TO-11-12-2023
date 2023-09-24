// #to convert char to num use str[0]-'0';

#include<bits/stdc++.h>
using namespace std;
int calculateBinaryOperations(char*str){
    int len = strlen(str);
    int ans = str[0]-'0';
    for(int i = 0;i<len-1;i++){
        int j = i+1;
        if(str[i]=='A'){
            ans = ans&(str[j]-'0');
        }else if(str[i]=='B'){
            ans = ans|(str[j]-'0');
        }else if(str[i]=='C'){
            ans = ans^(str[j]-'0');
        }
    }
    return ans;
}
int main(){
    char str[100];
    cout<<"Enty The String"<<endl;
    cin>>str;
    cout<<"Output :"<<endl;
    cout<<calculateBinaryOperations(str);
}
