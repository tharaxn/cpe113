#include <iostream>
#include "FastLinkedQueue.h"
using namespace std;

int main()
{
    int op;
    FastLinkedQueue q;
    do
    {
        cout<<" Manu "<<endl;
        cout<<" 1: ENQ 2:DEQ 3:FRONT 4:REAR 5:DISPLAY 0:END"<<endl;
        cout<<"Enter Manu ";cin>>op;

        switch (op)
        {
        case 1:
         int e; 
         cout<<" '0' end ENQ."<<endl;        
            do
              {
                cout<<"ENQ: ";cin>>e;
                if( e>0)
                q.enQueue(e);
              } while(e != 0);             
            q.display();
            cout<<endl;
        break;
        case 2:
            int a;
            a = q.deQueue();
            cout<<"DEQ: "<< a <<endl;
            q.display();
            cout<<endl;
        break;
        case 3:
            int f;
            f = q.front();
            cout<<"Front: "<< f <<endl;
            cout<<endl;
        break;
        case 4:
            int r;
            r = q.rear();
            cout<<"Rear: "<< r <<endl;
            cout<<endl;
        break;
        case 5:
            q.display();
            cout<<endl;
        break;
        
        default:
            break;
        }
    } while (op != 0);
    
    return 0;
}