#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
bool areanagrams(const string&str1,const string&str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    
    int count1[256] = {0};
    int count2[256] = {0};
    
    for(char ch:str1) count1[ch]++;
    for(char ch:str2) count2[ch]++;
    
    for(int i = 0;i<256;i++){
        if(count1[i]!=count2[i]) return false;
    }
    
    return true;
}

int main(){
    string str1 = "listen";
    string str2 = "silent";
    
    if(areanagrams(str1,str2)) cout<<"Yes";
    else cout<<"No";
}
