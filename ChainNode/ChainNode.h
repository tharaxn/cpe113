#if !defined(_CHAINNODE_H_)
#define _CHAINNODE_H_
#include <iostream>

class ChainNode{

public:
int element;
ChainNode *next;

public:
ChainNode(int e =0, ChainNode *p =NULL);
};


#endif // _ARRAYLIST_H_
