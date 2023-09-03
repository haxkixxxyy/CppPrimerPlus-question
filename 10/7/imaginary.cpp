#include"imaginary.h"

Imaginary::Imaginary(int _Re,int _Lm){
    Re=_Re;
    Lm=_Lm;
}

Imaginary Imaginary::operator+(const Imaginary &c){
    return Imaginary(Re+c.Re,Lm+c.Lm);
}

Imaginary Imaginary::operator-(const Imaginary &c){
    return Imaginary(Re-c.Re,Lm-c.Lm);
}

Imaginary Imaginary::operator*(const Imaginary &c){
    return Imaginary(Re*c.Re-Lm*c.Lm,Re*c.Lm+Lm*c.Re);
}

Imaginary Imaginary::operator*(int x) const
{
    return Imaginary(Re*x,Lm*x);
}

Imaginary Imaginary::operator~(){
    return Imaginary(Re,-Lm);
}

istream & operator>>(istream &is,Imaginary &c){
    cin>>c.Re>>c.Lm;
    return is;
}

ostream & operator<<(ostream &os,const Imaginary &c){
    cout<<"("<<c.Re;
    if (c.Lm!=0)
    {
        cout<<","<<c.Lm<<'i';
    }
    cout<<")";
    return os;
}

Imaginary::~Imaginary(){ 
}