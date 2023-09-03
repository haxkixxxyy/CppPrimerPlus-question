#include<iostream>
#include<cstring>
using namespace std;
bool is_true(const char* str,int length){
    for(int i=0;i<=length/2;i++){
        if(str[i]!=str[length-i-1]) return false;
    }
    return true;
}
const int maxn=100000;

int main(){
    char str[maxn];
    cin.getline(str,maxn);
    int len=strlen(str);
    cout<<str<<" is "<<is_true(str,len)<<endl;
    return 0;
}   