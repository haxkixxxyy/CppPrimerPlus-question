#include<iostream>
using namespace std;

long double sum_value(){
    return 0;
}

template<typename T,typename... Args>
long double sum_value(T x,Args... args){
    sum_value(args...);
    return (long double)(x+sum_value(args...));
}

template<typename T>
long double sum_value(T x){
    return (long double)x;
}

int main(){
    int x=21;
    long double b;
    b=sum_value(x*x,5,-256);
    cout<<b;
    return 0;
}