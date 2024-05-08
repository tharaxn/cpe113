#if !defined(_ARRAYSTACK_H_)
#define _ARRAYSTACK_H_

#include "../ArrayList/ArrayList.h"
#define DEFAULT_STACK_SIZE 5

class ArrayStck : public ArrayList
{

private:
    int maxSize;

public:
    ArrayStck(int maxSize = DEFAULT_STACK_SIZE);
    ~ArrayStck();

    void push(int e);
    int pop();
    int top();

    int peak() {return top();}
    
};

#endif // _ARRAYLIST_H_
