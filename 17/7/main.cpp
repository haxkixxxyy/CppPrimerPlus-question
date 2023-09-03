#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void ShowStr(string);
void GetStrs(ifstream &is,vector<string> &v);

class Store{
    private:
    ofstream &os;
    public:
    Store(ofstream &a): os(a)
    {}
    ofstream & operator()(const string& str){
        int len=str.size()+1;          //多了一个空字符,长度要加一
        os.write((char*)&len,sizeof(int));
        os.write(str.c_str(),len);
        return os;
    }
};

int main(){
    vector<string> vostr;
    string temp;
    cout<<"Enter strings (empty line to quit):\n";
    while(getline(cin,temp)&&temp[0]!='\0')
        vostr.push_back(temp);
    cout<<"This is input.\n";
    for_each(vostr.begin(),vostr.end(),ShowStr);
    ofstream fout("strings.dat",ios_base::out|ios_base::binary);
    for_each(vostr.begin(),vostr.end(),Store(fout));
    fout.close();
    vector<string> vistr;
    ifstream fin("strings.dat",ios_base::in|ios_base::binary);
    if(!fin.is_open()){
        cerr<<"Could not open file for input.\n";
        exit(EXIT_FAILURE);
    };
    GetStrs(fin,vistr);
    cout<<"\nHere are the strings read from the file: \n";
    for_each(vistr.begin(),vistr.end(),ShowStr);
    return 0;
}

void ShowStr(string str){
    cout<<str<<endl;
}

void GetStrs(ifstream &is,vector<string> &v){
    int len;
    char str[1000];
    while(is.read((char*)&len,sizeof(int))){
        is.read(str,len);
        v.push_back(str);
    }
}