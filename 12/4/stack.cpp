#include"stack.h"
Stack::Stack(int n){
    pitems=new Item[n];
    size=n;
    top=0;
}
Stack::Stack(const Stack &st){
    pitems=new Item[st.size];
    for(int i=0;i<st.top;i++)
    {
        pitems[i]=st.pitems[i];
        /* code */
    }
    size=st.size;
    top=st.top;
}
Stack::~Stack(){
    delete []pitems;
}
bool Stack::isempty() const{
    if(top==0) return true;
    else return false;
}
bool Stack::isfull() const{
    if(top==size-1) return true;
    else return false;
}
bool Stack::push(const Item & item){
    if(isfull())return false;
    pitems[top++]=item;
    return true;
}
bool Stack::pop(Item & item){
    if(isempty())return false;
    item=pitems[--top];
    return true;
}
Stack &Stack::operator=(const Stack &st){
    if(this==&st) return *this;
    delete []pitems;
    pitems=new Item[st.size];
    for(int i=0;i<st.top;i++)
    {
        pitems[i]=st.pitems[i];
        /* code */
    }
    size=st.size;
    top=st.top;
    return *this;   
}
Item &Stack::operator[](int i){
    return pitems[i];
}