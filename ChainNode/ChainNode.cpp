#include "ChainNode.h"
#include <iostream>

using namespace std;
ChainNode::ChainNode(int e, ChainNode*p){
    element = e;
    next = p;
}

