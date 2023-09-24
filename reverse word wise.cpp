#include<iostream>
#include<string.h>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;

string reversewordwise(const string&input){
    vector<string>words:
    string word;
    for(char c:input){
        if(C == ' '){
            if(!word.empty()){
                words.push_back(word);
                word.clear();
            }else{
                word+=c;
            }
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    
    reverse(words.begin(),words.end());
    
    string reversed;
    for(string w:words){
        reversed+=w+" ";
    }
    
    if(!reversed.empty()) reversed.pop_back();
    return reversed;
}
