#include<iostream>
#include<fstream>
#include<unistd.h>
using namespace std;

int main(){
    ifstream a;
    ofstream b;
    a.open("1.txt");
    string str;
    b.open(".//2.txt");
    while(a>>str){
        char ch;
        a.get(ch); //∂¡»°ø’––
        b<<str<<ch;
    }
    a.close();
    b.close();
    return 0;
}