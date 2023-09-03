#ifndef STACK_H
#define STACK_H
typedef unsigned long Item;

class Stack
{
private:
    enum {MAX=10};
    Item* pitems;
    int size;
    int top;
    /* data */
public:
    Stack(int n=MAX);
    Stack(const Stack &st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & Item);
    Stack &operator=(const Stack &st);
    Item &operator[](int i);
};
#endif