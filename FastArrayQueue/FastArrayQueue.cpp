#include <iostream>
#include "FastArrayQueue.h"
using namespace std;

FastArrayQueue::FastArrayQueue(int maxSize)
{
    this->maxSize = maxSize;
    this->curSize = 0;
    this->in = 0;
    this->out = 0;
    L = new int[maxSize];
}

FastArrayQueue::~FastArrayQueue()
{
    delete []L;
    cout<<" Delete L[]_ "<<endl;
}

void FastArrayQueue::enQueue(int e)
{
    if(curSize == maxSize)
    {
        cerr<<" Error: Queue is Full!!"<<endl;
        return;
    }
   
   
        L[in] = e;
        in = (in + 1) % maxSize;
        curSize ++;
   
}

int FastArrayQueue::deQueue()
{
    if(curSize == 0)
    {
        cerr<<" Error: Queue is Empity!!"<<endl;
        return-1;
    }
   
    int temp = L[out];
    out = (out + 1) % maxSize;
    curSize--;
    return temp;
}

int FastArrayQueue::front()
{
    if(curSize == 0)
    return -1;
    return L[out];
}

int FastArrayQueue::rear()
{
    if(curSize == 0)
    return -1;
   return L[in - 1];
}

void FastArrayQueue::display()
{
    cout<<"Q: [";
    if(curSize == 0)
    cout<<"]"<<endl;
    else
     for(int i = 0; i < curSize ; i ++)
     {
        cout<<L[(out + i) % maxSize];
            if(i < curSize -1)
            cout<<" ";
            else
            cout<<"]"<<endl;
     }
    
    cout<<"Cursize: "<< curSize << " Maxsize: " << maxSize << endl;
}
