#ifndef IMAGINARY_H
#define IMAGINARY_H
#include<iostream>
using namespace std;
class Imaginary
{
private:
    /* data */
    int Re;
    int Lm;
public:
    Imaginary(){Re=0;Lm=0;};
    Imaginary(int _Re,int _Lm=0);
    Imaginary operator+(const Imaginary &c);
    Imaginary operator-(const Imaginary &c);     //a-c和c-a都可以调用成员函数,因此不要用友元;
    Imaginary operator*(const Imaginary &c);
    Imaginary operator*(int x) const;
    Imaginary operator~();
    friend istream & operator>>(istream &is,Imaginary &c);
    friend ostream & operator<<(ostream &os,const Imaginary &c);
    friend Imaginary operator*(int a,const Imaginary &c){
        return c*a;
    };
    ~Imaginary();
};
#endif