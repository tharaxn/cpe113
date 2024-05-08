#include "ArrayStack.h"
#include <iostream>

using namespace std;

ArrayStck::ArrayStck(int maxSize)
    : ArrayList(maxSize) 
{
    this->maxSize = maxSize;
}

ArrayStck::~ArrayStck()
{
}

void ArrayStck::push(int e)
{
    add(size(), e);
}

int ArrayStck::pop()
{
    return remove(size()-1);
}

int ArrayStck::top()
{
    //int tmp = remove(size()-1);
    //return tmp;
    return get(size()-1);
}
