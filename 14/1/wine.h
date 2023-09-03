#ifndef WINE_H
#define WINE_H
#include<string>
#include<valarray>
#include<iostream>
#include<utility>
using namespace std;
typedef valarray<int> ArrayInt;
typedef pair<valarray<int>,valarray<int> > PairInt;
class Wine: private string,private PairInt //不能用pair,不是一个类,只是一个模版,必须说明类型
{
private:
    int years;
public:
    Wine(const char* l,int y,const int yr[],const int bot[]);
    Wine(const char* l="",int y=0);
    void GetBottles();
    string & Label();
    void show() const;
    int sum() const;
    ~Wine(){};
};
#endif