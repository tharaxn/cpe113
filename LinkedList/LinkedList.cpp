#include "LinkedList.h"
#include "../ChainNode/ChainNode.h"

#include <iostream>

using namespace std;

bool LinkedList::isFull()
{
    ChainNode *p = new ChainNode;
    bool returnBool;
    if (p != NULL)
        returnBool = false;
    else
        returnBool = true;
    delete p;
    return returnBool;
}

bool LinkedList::isEmpty()
{

    return curSize == 0;
}

LinkedList::LinkedList()
{
    curSize = 0;
    firstNode = new ChainNode(0, NULL);
}

LinkedList::~LinkedList()
{
    ChainNode *p = firstNode;
    while (p != NULL)
    {
        ChainNode *n = p ->next;
        delete p;
        p = n;
    }
    
}

int LinkedList::size()
{
    return curSize;
}

int LinkedList::indexOf(int e)
{
    if (isEmpty())
    {
        cerr << "Error : List is empty" << endl;
        return -1;
    }
    else
    {
        ChainNode *p = firstNode->next;
        for (int i = 0; i < curSize; i++)
        {
            if (p->element == e)
                return i;
                p = p->next;
        }
    }
    cerr <<"Error : element not found" << endl;
    return -1;
}

int LinkedList::get(int i)
{
    if (isEmpty())
    {
        cerr << "Error : List is empty" <<endl;
        return -1;
    }
    else if (i > curSize - 1){
        cerr << "Error:" << i << "is over upper bound" << endl;
        return -1;
    }
    else{
        ChainNode *p = firstNode->next;
        for (int j = 0; j < i; j++)
        p = p->next;
        return p ->element;  
    }
}

void LinkedList::set(int i, int e)
{
    if (i < 0)
    {
        cerr << "Warning:" << i << "is lower bound"<< endl;
    }
    else if (i > curSize)
    {
        cerr << "Warning:" << i << "is over upper bound" << endl;
    }
    else
    {
        ChainNode *p = firstNode->next;
        for(int j = 0; j < i; j++)
        p = p->next;
        p->element=e;
    }
    
}

int LinkedList::remove(int i)
{
    if (isEmpty())
    {
        cerr << "Error: List is empty"<<endl;
        return-1;
    }
    if(i < 0)
    {
        cerr << "error:"<< i << "is over bound" << endl;
        return-1;
    }
    else if (i > curSize)
    {
        cerr << "Error: " << i << "is over upper bound" << endl;
        return -1;
    }
    ChainNode *p =firstNode;
    for (int j = 0; j < i; j++)
        p = p->next;
        ChainNode *q = p->next;
        ChainNode *r = q->next;

        int temp = q->element;

        delete q;
        p->next = r;

        curSize --;
        return temp;
}
void LinkedList::add(int i, int e)
{
    if (isFull())
    {
        cerr << "Error: Memory is full" << endl;
        return;
    }
    if (i < 0)
    {
        cerr << "Warning:" << i << "is lower bound" << endl;
        cout << "message: Index is changed to 0" << endl;
    }
    
    if(i < curSize)
    {
        cerr << "warning:" << i << "is over upper bound" << endl;
        cout << "wessage Index is changed to curSize" << endl;
        i = curSize;
    }
    ChainNode *p = firstNode;
    for (int j = 0; j < i; j++)
    p = p->next;
    ChainNode *q =new ChainNode(e, p->next);
    p->next = q;
    curSize++;
    
}

void LinkedList::display()
{
    cout << "L;{";
    if (curSize == 0)
        cout << "},";
        else
        {
            ChainNode *p =firstNode->next;
            for(int i = 0; i < curSize; i++, p = p->next)
            {
                cout << p->element;
                if (i < curSize - 1)
                cout << ",";
                else
                cout << "}" << endl;
            }
        }
        cout << "size:" << curSize << endl;
}

void LinkedList::clear()
{
    ChainNode *p = firstNode;
    while (p != NULL)
    {
        ChainNode *n = p ->next;
        delete p;
        p = n;
    }
    firstNode->next = NULL;
    curSize = 0;
    //curSize = 0;
}

int LinkedList::max()
{
    if (isEmpty())
    {
        cerr << "Error: List is empty" << endl;
        return -1;
    }
    else
    {
        int max = firstNode->next->element;
        ChainNode *p = firstNode->next->next;
        for (int i = 1; i < curSize; i++, p = p->next)
            if (max < p->element)
           max = p->element;

           return max;
    }
    
}

int LinkedList::min()
{
    if (isEmpty())
    {
        cerr << "Error List is empty" << endl;
        return -1;
    }
    else
    {
        int min = firstNode->next->element;
        ChainNode *p =firstNode->next->next;
        for (int i = 1; i < curSize; i++,p = p->next)
        if(min > p->element)
            min = p->element;

            return min;
    }  
}

int LinkedList::oddCount()
{
    ChainNode *p = firstNode->next;
    int oddCounter;

    for (oddCounter = 0; p !=NULL ; p = p->next)
    {
        if ( p->element % 2 ) oddCounter ++;
    }
    return 0;
}

int LinkedList::evenCount()
{
    return curSize - oddCount();
}

float LinkedList::sum() // not yet
{
    float sum = 0;
    if (isEmpty())
    {
        cerr << "[ERROR]: List is empty" << endl;
        return -1;
    }
    else
    {
        ChainNode *p = firstNode->next;
        for (int i =0; i < curSize; i++, p = p->next)
            sum = sum + p->element;
    }
    return sum;
}

float LinkedList::mean()
{
    return sum() / (float)curSize;
}
