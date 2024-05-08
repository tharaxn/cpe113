#if !defined(_FASTLINKEDQUEUE_H)
#define _FASTLINKEDQUEUE_H
#include "../ChainNode/ChainNode.h"

class FastLinkedQueue
{
    private:
    int curSize;
    ChainNode *FirstNode;
    ChainNode *LastNode;
    
    public:
    FastLinkedQueue();
   ~FastLinkedQueue();

   bool Isfull();
   bool Isempty();

    void enQueue(int e);
    int  deQueue();
    int  front();
    int  rear();
    void display();

    void append(int i){enQueue(i);}
    int remove(){return deQueue();}
    int head(){return front();}
    int back(){return rear();}
};

#endif // _FASTLINKEDQUEUE_H
