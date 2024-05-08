/**********************************************
 * ID : 65018219
 * NAME : Miss. Thansa  Muensri
 * DESCRIPTION : HashTable Test
 **********************************************/

#include "HashTable.h"
#include <iostream>

using namespace std;

HashTable::HashTable(int maxsize)
{
    this ->maxsize = maxsize;
    cursize = 0;
    table = new ArrayList(this->maxsize);

    for (int i=0; i < this->maxsize; i++)
    {
        table ->add(i,-1);
    }
}

HashTable::~HashTable()
{
    delete table;
    cout<<" Good Bye, See you next. "<<endl;
    
}

void HashTable::display()
{
    cout <<" Hash Table " << endl;
    for (int i=0; i<maxsize; i++)
    {
        cout <<" [ " <<i<<" ]:" ;
        if(table->get(i)<0)
            cout << "-"<<endl;
        else
            printf("%2d\n", table->get(i));
    }
    cout<< " using: "<<cursize<<"/" <<maxsize <<endl;

    double percent = (double)cursize / (double)maxsize *100;
        printf(" Threshold : %0.2f\n", percent); cout<<"%"<<endl;

}

void HashTable::addkey(int key)
{
    for (int i = 0; i < maxsize; i++)
    {
        int index = hashFuntion (key,maxsize,i);

        if (table->get(index)< 0)
        {
            table->set(index, key);
            cursize ++;
            break;
        
        }
        cout <<"key("<<key<<") => Index: "
            <<index << "Collision!!! " << endl;
    }
     double percent = (double)cursize / (double)maxsize *100;
        if (percent >=REHASH_THRESHOLD)
            rehashing();

}

int HashTable::searchkey(int key)
{
    int indexof;
    for(int i = 0; i < maxsize ; i++)
    {
        int index = hashFuntion(key , maxsize , i);
            if(table->get(index) == key)
            {
            indexof =  table->indexOf(key);
            cout<<"Found at index: "<< indexof <<endl;
            break;
            }

        cout<<"Not found at!! index: "<< index <<endl;
    }
    return indexof;
}

int HashTable::hashFuntion(int key, int n, int i)
{
    return ((key % n) + probingFunction(i)) % n;
}

void HashTable::rehashing()
{
    cout<<" Rehashing "<<endl;
    int oldMaxSize =maxsize;
    int newMaxSize = (float)oldMaxSize * REHASH_EXPAND;
    maxsize = newMaxSize;
    ArrayList * newTable = new ArrayList(maxsize);

    for (int i = 0; i < maxsize ; i++)
        newTable->add(i, -1);
        cursize = 0;

    for (int i = 0; i < oldMaxSize ; i++)
    {
        if (table ->get(i) >=0)
        {
            int key = table->get(i);
            for (int j = 0; j < maxsize; j++)
            {
                int newindex = hashFuntion(key, maxsize , j);

                if(newTable ->get(newindex) < 0)
                {
                    newTable ->set(newindex,table->get(i));
                    cursize ++;
                    break;
                }
                cout<< " Collision ! " <<endl;

            }
        }
    }
    delete table;
    table = newTable;

    
}

int HashTable::probingFunction(int i)
{
    return i;
}
