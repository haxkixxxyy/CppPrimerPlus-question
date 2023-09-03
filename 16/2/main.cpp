#include<iostream>
#include<cctype>
#include<string>
using namespace std;

bool is_true(string str){
    for(int i=0;i<=str.length()/2;i++){
        if(str[i]!=str[str.length()-i-1]) return false;
    }
    return true;
}

string no_alnum(string str){
    string temp;
    for(int i=0;i<str.size();i++){
        if(isalnum(str[i])){
            temp.push_back(tolower(str[i]));
        }
    }
    return temp;
}

int main(){
    string str;
    getline(cin,str);
    string str2=no_alnum(str);
    cout<<str<<" is "<<is_true(str2)<<endl;
    return 0;
}