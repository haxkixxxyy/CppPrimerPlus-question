#include<iostream>
#include"wine.h"

int main(){
    using std::cin;
    using std::cout;
    using std::endl;
    cout<<"enter name of wine : ";
    char lab[50];
    cin.getline(lab,50);
    cout<<"enter number of year : ";
    int yrs;
    cin>>yrs;
    Wine holding(lab,yrs);//构造函数
    holding.GetBottles();
    holding.show();
    const int YRS=3;
    int y[YRS]={1993,1995,1998};
    int b[YRS]={48,60,72};
    Wine more("Gushing Grape red",YRS,y,b);
    more.show();
    cout<<"total bottles for "<<more.Label();
    cout<<": "<<more.sum()<<endl;
    cout<<"bye\n";
    return 0;
}