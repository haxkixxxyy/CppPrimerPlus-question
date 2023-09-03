#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ifstream a,b;
    a.open("1.txt");
    b.open("2.txt");
    ofstream c;
    c.open("3.txt");
    string str1,str2;
    while(a>>str1&&b>>str2){
        c<<str1<<" "<<str2<<endl;
    }
    if(!a.eof()){
        while(a>>str1){
            c<<str1<<endl;
        }
    }
    if(!b.eof()){
        while(b>>str2){
            c<<str2<<endl;
        }
    }
    return 0;
}