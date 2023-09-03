#include<iostream>
using namespace std;
int main(){
    const int maxn=100000;
    char ch;
    int len=0;
    cin.get(ch);
    while(ch!='$'){
        len++;
        cin.get(ch);
    }
    cout<<len;
    return 0;
}