#include "LinkedStack.h"
#include <iostream>

using namespace std;

LinkedStack::LinkedStack()
    : LinkedList ()
{
    firsNode = new ChainNode(0,NULL);
}

void LinkedStack::push(int e)
{
    add(size() , e);
}

int LinkedStack::pop()
{
    return remove(size()-1);
}

int LinkedStack::top()
{ 
    //int tmp = remove(size()-1);
    //return tmp;
    return get(size()-1);
}
