#include<iostream>
#include<initializer_list>
using namespace std;

template<typename T>
T average_list(initializer_list<T> x){
    T total=0;
    for(auto q=x.begin();q!=x.end();q++){
        total+=*q;
    }
    return total/x.size();
}

int main(){
    auto q=average_list({15.4,10.7,9.0});
    cout<<q<<endl;
    cout<<average_list({20,30,19,17,45,38})<<endl;
    auto ad=average_list<double>({'A',70,65.33});
    cout<<ad<<endl;
    return 0;
}