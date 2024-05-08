#if !defined(_LINKEDSTACK_H_)
#define _LINKEDSTACK_H_

#include "../LinkedList/LinkedList.h"

class LinkedStack : public LinkedList
{
private:
    ChainNode *firsNode;
    int cursize;
public:
    LinkedStack();

    void push(int e);
    int pop();
    int top();
    
};

#endif // _ARRAYLIST_H_
