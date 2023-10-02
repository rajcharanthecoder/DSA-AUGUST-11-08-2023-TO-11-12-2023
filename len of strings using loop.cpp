#include<iostream>
using namespace std;
int len(char*str){
    int count = 0;
    while(*str!=0){
        count++;
        str++;
    }
    return count;
}
int main(){
    char str[] = "PrepInsta";
    cout<<len(str);
}
