#ifndef STRING_H
#define STRING_H
#include<iostream>
using namespace std;
class String
{
private:
    int len;
    char *str;
    static const int CINLIM=80;
    /* data */
public:
    String();
    String(const char *);
    ~String();
    void Stringlow();
    void Stringup();
    String(const String &);
    int lengh() const;
    int has(char s) const;
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;
    friend bool operator<(const String &,const String &);
    friend bool operator>(const String &,const String &);
    friend bool operator==(const String &,const String &);
    friend ostream & operator<<(ostream &,const String &);
    friend istream & operator>>(istream &,String &);
    friend String operator+(const String &,const String &);
};
#endif