#include "HashTable.h"
#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    char ch;
    cout<<endl;
    cout<<" Do you want to set maxsize or not? y/n: ";cin>>ch;
     if(ch == 'y')
     {
        cout<<" set to Maxsize: ";cin>>size;
        HashTable h(size);
        int op; 
        do
        {
          cout<<endl;
          cout<<" Menu " <<endl;
          cout<<" 1:Add Key " <<endl;
          cout<<" 2:Search Key " <<endl;
          cout<<" 3:Display " <<endl;
          cout<<" 0:Ext " <<endl;
          cout<<" Manu: ";cin>>op;

           if(op == 1)
           {
             cout<<endl;
             int x;
             cout<<" set Key: ";cin>> x;
             h.addkey(x);
             h.display();
             
           }

           else if(op == 2)
           {
             cout<<endl;
             int x;
             cout<<" Search Key: ";cin>>x;
             h.searchkey(x);
            
           }

           else if(op == 3)
           {
            cout<<endl;
            h.display();
           }
        }while (op !=0);
    }
    else
    {
        HashTable h;
        int op; 
        do
        {
          cout<<endl;
          cout<<" Menu " <<endl;
          cout<<" 1:Add Key " <<endl; 
          cout<<" 2:Search Key " <<endl;
          cout<<" 3:Display " <<endl;
          cout<<" Manu: ";cin>>op;

           if(op == 1)
           {
             cout<<endl;
             int x;
             cout<<" set Key: ";cin>> x;
             h.addkey(x);
             h.display();
           }

           else if(op == 2)
           {
             cout<<endl;
             int x;
             cout<<" Search Key: ";cin>>x;
             h.searchkey(x);
             
           }

           else if(op == 3)
           {
            cout<<endl;
            h.display();
            
           }

        }while (op !=0);
    }
   
    
    
    return 0;
}
