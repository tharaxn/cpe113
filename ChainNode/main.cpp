/**********************************************
 * ID : 65018219
 * NAME : Miss. Thansa  Muensri
 * DESCRIPTION : ChainNode Testing
 **********************************************/

#include <iostream>
#include "ChainNode.h"

using namespace std;

int main()
{
    ChainNode a;
    ChainNode b(10, &a);
    ChainNode c(20, &b);
    return 0;
}