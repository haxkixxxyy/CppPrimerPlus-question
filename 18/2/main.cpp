#include<iostream>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;

class Cpmv
{
public:
    struct Info
    {
        string qcode;
        string zcode;
    };
private:
    Info *pi;
public:
    Cpmv();
    Cpmv(string q,string z);
    Cpmv(const Cpmv& cp);
    Cpmv(Cpmv && mv);
    ~Cpmv();
    Cpmv & operator =(const Cpmv &cp);
    Cpmv & operator =(Cpmv &&cp);
    Cpmv operator +(const Cpmv& obj) const;
    void Display() const;
};

int main(){
    Cpmv a;
    a.Display();
    string str1="abcd";
    string str2="efghijklmnopq";
    Cpmv b(str1,str2);
    b.Display();
    Cpmv c(b);
    c.Display();
    Cpmv d(move(b));
    d.Display();
    Cpmv e;
    e=c;
    e.Display();
    Cpmv f;
    f=e+b;
    f.Display();
    return 0;
}

Cpmv::Cpmv(string q,string z){
    pi=new Info;
    pi->qcode=q;
    pi->zcode=z;
}

Cpmv::Cpmv(){
    pi=new Info;
    pi->qcode="none";
    pi->zcode="none";
}

Cpmv::Cpmv(const Cpmv& cp){
    cout<<"nomal !"<<endl;
    pi=new Info;
    pi->qcode=cp.pi->qcode;
    pi->zcode=cp.pi->zcode;
}

Cpmv::Cpmv(Cpmv && mv){
    cout<<"move !"<<endl;
    pi=new Info;
    pi=mv.pi;
    mv.pi=nullptr;
}

Cpmv::~Cpmv(){
    delete pi;
}

Cpmv & Cpmv::operator =(const Cpmv &cp){
    cout<<"nomal =!"<<endl;
    if(this==&cp) return *this;
    delete pi;
    pi=new Info;
    pi->qcode=cp.pi->qcode;
    pi->zcode=cp.pi->zcode;
    return *this;
}

Cpmv & Cpmv::operator =(Cpmv &&cp){
    cout<<"move =!"<<endl;
    if(this==&cp) return *this;
    delete pi;
    pi=new Info;
    pi=cp.pi;
    cp.pi=nullptr;
    return *this;
}

Cpmv Cpmv::operator +(const Cpmv& obj) const
{
    if(!this->pi){              //一定要考虑的是移动构造和赋值构造后的空指针的处理
        if(!obj.pi){
            return *this;
        }
        else return obj;
    }
    if(!obj.pi) return *this;
    else return Cpmv(this->pi->qcode+obj.pi->qcode,this->pi->zcode+obj.pi->zcode);
}

void Cpmv::Display() const
{   
    if(!this->pi){
        cout<<"this cpmv is null"<<endl;
        return;
    }
    cout<<this->pi->qcode<<" "<<this->pi->zcode<<endl;
}