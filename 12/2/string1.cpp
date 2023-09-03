#include<cstring>
#include<cctype>
#include"stringxx.h"
String::String(){
    str=new char[1];
    len=0;
    str[0]='\0';
}

String::String(const char * s){
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
}

String::~String(){
    delete []str;
    len=0;
}

void String::Stringlow(){
    for(int i=0;i<len;i++){
        str[i]=tolower(str[i]);
    }
}

void String::Stringup(){
    for(int i=0;i<len;i++){
        str[i]=toupper(str[i]);
    }
}

String::String(const String &s){
    len=strlen(s.str);
    str=new char[len+1];
    strcpy(str,s.str);
}

int String::lengh() const{
    return len;
}

int String::has(char s) const{
    int num=0;
    for(int i=0;i<len;i++){
        if(str[i]==s) num++;
    }
    return num;
}

String & String::operator=(const String & s){
    if(this==&s){
        return *this;
    }
    delete []str;
    len=strlen(s.str);
    str=new char[len+1];
    strcpy(str,s.str);
    return *this;
}

String & String::operator=(const char *s){
    delete []str;
    len=strlen(s);
    str=new char[len+1];
    strcpy(str,s);
    return *this;
}

char & String::operator[](int i){
    return str[i];
}

const char & String::operator[](int i) const{
    return str[i];
}

bool operator<(const String &s1,const String &s2){
    return (strcmp(s1.str,s2.str)<0);
}

bool operator>(const String &s1,const String &s2){
    return (strcmp(s1.str,s2.str)>0);
}

bool operator==(const String &s1,const String &s2){
    return (strcmp(s1.str,s2.str)==0);
}

ostream & operator<<(ostream &os,const String &s){
    os<<s.str;
    return os;
}

istream & operator>>(istream &is,String &s){
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is) s=temp;
    while (is&&is.get()!='\n'){}
    return is;
}

String operator+(const String &s1,const String &s2){
    char s[s1.len+s2.len+1];
    strcpy(s,s1.str);
    strcpy(s+s1.len*sizeof(char),s2.str);
    return s;
}
