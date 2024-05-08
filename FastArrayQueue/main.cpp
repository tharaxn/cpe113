/**********************************************
 * ID : 65018219
 * NAME : Miss. Thansa  Muensri
 * DESCRIPTION : FastArrayQueue Testing
 **********************************************/

#include <iostream>
#include "FastArrayQueue.h"
using namespace std;

int main()
{
    FastArrayQueue Q;
    int op;
    do
    {
      cout<<endl;
      cout<<" Manu "<<endl;
      cout<<"1:ENQ 2:DEQ 3:FRONT 4:REAR 5:Display 6:END "<<endl;
      cout<<"Enter Manu ";cin>>op;

      if(op==1)
      {
        int e;
        cout<<" '0' end ENQ "<<endl;
        do
         {
         cout<<"Enter ENQ: ";cin>>e;
          if(e > 0)
          Q.enQueue(e);
         }while(e != 0);
        Q.display();
        cout<<endl;
      }
      else if(op == 2)
      {
        Q.display();
        int e = Q.deQueue();
        cout<<"DEQ: "<<e<<endl;
        Q.display();
        cout<<endl;
      }
      else if(op == 3)
      {
        Q.display();
        int e = Q.front();
        cout<<"Front: "<< e <<endl;
        cout<<endl;
      }
      else if(op == 4)
      {
        Q.display();
        int e = Q.rear();
        cout<<"Reae: "<< e <<endl;
        cout<<endl;
      }
      else if(op == 5)
      Q.display();

      
    }while(op !=0);

    return 0;
}