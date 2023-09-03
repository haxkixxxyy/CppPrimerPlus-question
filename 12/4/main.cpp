#include"stack.h"
#include<iostream>
int main(){
    Stack s1;
    Item x;
    for(int i=0;i<8;i++){
        std::cin>>x;
        s1.push(x);
    }
    for(int i=0;i<8;i++){
        s1.pop(x);
        std::cout<<x<<" ";
    }
    return 0;
}