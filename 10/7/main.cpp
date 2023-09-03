#include"imaginary.h"
#include<iostream>
using namespace std;
int main(){
    Imaginary a(3.0,4.0);
    Imaginary c;
    cout<<"enter a complex number:\n";
    while (cin>>c)
    {
        /* code */
        cout<<"c is "<<c<<"\n";
        cout<<"imaginary conjugate is "<<~c<<"\n";
        cout<<"a is"<<a<<"\n";
        cout<<"a + c is "<<a+c<<"\n";
        cout<<"a - c is "<<a-c<<"\n";
        cout<<"a * c is "<<a*c<<"\n";
        cout<<"2 * c is "<<2*c<<"\n";
        cout<<"enter a complex number (q to quit) :\n";
    }
    cout<<"done!\n";
    return 0;
}