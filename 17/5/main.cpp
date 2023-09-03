#include<iostream>
#include<fstream>
#include<set>
#include<string>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    ifstream a,b;
    ofstream c;
    a.open("mat.dat");
    b.open("pat.dat");
    c.open("matpat.dat");
    set<string> s1;
    set<string> s2;
    set<string> s3;
    string str1;
    while(a>>str1){
        s1.insert(str1);
    }
    while(b>>str1){
        s2.insert(str1);
    }
    ostream_iterator<string,char> out(c,"\n");
    set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),out);
    for(auto x : s3){
        c<<x<<endl;
    }
    return 0;
}