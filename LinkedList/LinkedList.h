#if !defined(_LINKEDLIST_H_)
#define _LINKEDLIST_H_

#include "../ChainNode/ChainNode.h"

class LinkedList{

private:
ChainNode *firstNode;
int curSize;
//int *L;
//int maxSize;

private:
bool isFull();
bool isEmpty();

public:

LinkedList();
~LinkedList();

int size(); 
int indexOf(int e);
int get(int i); 
void set(int i, int e);
int remove(int i); 
void add(int i, int e);
void display();

void clear();
int max();
int min();
int oddCount();
int evenCount();
float sum();
float mean();

// options
void sort();
void appendRandom(int n);


};

#endif // _LINKEDLIST_H_
