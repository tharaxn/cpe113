#include <iostream>
#include "FastLinkedQueue.h"
using namespace std;

FastLinkedQueue::FastLinkedQueue()
{
    curSize = 0;
    FirstNode = new ChainNode;
    LastNode = FirstNode;
}

FastLinkedQueue::~FastLinkedQueue()
{
    ChainNode *p = FirstNode;
    while( p != NULL)
    {
        ChainNode *n = p->next;
        delete p;
        n = p;
    }
    delete FirstNode;
    cout<<"delete FirsNode_"<<endl;
}

bool FastLinkedQueue::Isfull()
{
     ChainNode *o = new ChainNode;
    bool returnBool;
      if(o != NULL)
      returnBool = false; 
      else
      returnBool = true; 

    delete o;
    return returnBool;

}

bool FastLinkedQueue::Isempty()
{
    
    return curSize == 0;
}

void FastLinkedQueue::enQueue(int e)
{   if(Isfull() == 1)
    {
    cout<<"Queue Is Full"<<endl;
    return;
    }
    ChainNode *newNode = new ChainNode(e , NULL);
    LastNode->next = newNode;
    LastNode = newNode;
    curSize ++;
}

int FastLinkedQueue::deQueue()
{
    
        if (Isempty()) 
        {
            cout << "Queue is empty" << endl;
            return -1; 
        }
       
            int result = FirstNode->next->element;
            ChainNode *temp = FirstNode;
            FirstNode = FirstNode->next;
            delete temp;
            curSize--;
            
            return result;
        
}

int FastLinkedQueue::front()
{
    if (Isempty()) 
        return -1; 
        
    return FirstNode->next->element;
}

int FastLinkedQueue::rear()
{
     if (Isempty()) 
        return -1;
    return LastNode->element;
}

void FastLinkedQueue::display()
{
    cout<<"L:["; if( curSize == 0 ) cout<<"]"; //L:[]

        else //L:[1 2 3 4 5]
        {
            ChainNode *p = FirstNode->next;
                for(int i = 0; i < curSize ; i++ , p = p->next)
                {
                    cout<< p->element ; if( i < curSize - 1 ) cout<<" " ; else cout<<"]";
                }
        }
    cout<<"size: "<< curSize <<endl;
}
