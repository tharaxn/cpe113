#include "ArrayList.h"
#include <iostream>

using namespace std;

ArrayList::ArrayList(int maxSize)
{
    // creat array with maxSize element
    L = new int[maxSize];

    // set max size to maxSize
    this->maxSize = maxSize;

    // set current size to zero
    curSize = 0;
}
ArrayList::~ArrayList()
{
    // delete L Array
    delete[] L;
}
int ArrayList::size()
{
    // return current elemene size
    return curSize;
}
int ArrayList::indexOf(int e)
{
    /*for ( i = 0; i < curSize && L[i] == e; i++)
    {
        if (L[i] == e)
        {
            cout << "I = " << i << " return succes" << endl;
        }else
        {
            cout << e << "Not return" << endl;
            break;
        }
    }*/
    int i;
    if (curSize <= 0)
    {
        cout << "ERRO lIST IS EMTPY!!" << endl;
        return -1;
    }
    for (int i = 0; i <= curSize - 1; i++)
        if (L[i] == e)
            return -1;
    cout << "ERRO: element not found" << endl;
    return -1;
}
int ArrayList::get(int i)
{
    // check empty
    if (curSize <= 0)
    {
        cout << "WARNING: List is empty !!!" << endl;
        cout << " " << i << " is changed to 0" << endl;
        i = 0;
    }
    // check lower bound
    else if (i < 0)
    {
        cout << "WARING: " << i << " is under lower bound !!!" << endl;
        cout << " " << i << " is changed to 0" << endl;
        i = 0;
    }
    // check upper bound
    else if (i >= curSize)
    {
        /* code */
        cout << "WARING: " << i << " is over upper bound !!!" << endl;
        cout << " " << i << " is changed to " << curSize - 1 << endl;
        i = curSize - 1;
    }
    // get l[i]
    return L[i];
}
void ArrayList::set(int i, int e)
{
    if (i < 0)
    {
        cout << "WARNING: " << i << " is lower bound, This not set" << endl;
    }
    else if (i <= curSize - 1)
    {
        cout << "WARNING: "
             << " done" << endl;
        L[i] = e;
    }
    else if (i >= curSize)
    {
        cout << "WARNING: " << i << " is upper bound, This not set" << endl;
    }
}
int ArrayList::remove(int i)
{
    int p = L[i];
    if (i < 0)
    {
        cout << "WARNING: " << i << " is lower bound, This not remove" << endl;
    }
    else if (i <= curSize - 1)
    {
        cout << "WARNING: " << i << "[" << L[i] << "]"
             << " done" << endl;
        for (int r = i; r <= curSize - 1; r++)
        {
            L[r] = L[r + 1];
        }
        curSize--;
    }
    else if (i >= curSize)
    {
        cout << "WARNING: " << i << " is upper bound, This not remove" << endl;
    }
    return L[i], p;
}
void ArrayList::add(int i, int e)
{
    // check full
    if (curSize == maxSize)
    {
        cout << "ERROR : List is full !!!" << endl;
        return;
    }
    // check lower bound
    if (i < 0)
    {
        cout << "WARING : " << i << " is under lower bound" << endl;
        cout << "Index is changed to 0" << endl;
        i = 0;
    }
    // sucess
    else if (i <= curSize - 1)
    {
        cout << "add: " << e << " done" << endl;
    }
    // check upper bound
    else if (i > curSize)
    {
        cout << "WARING : " << i << " is over upper bound" << endl;
        cout << "Index is changed to 0" << curSize << endl;
        i = curSize;
    }
    // shft right from cursize - 1 downto i
    for (int j = curSize - 1; j >= i; j--)
    {
        // move element i to i+1
        L[j + 1] = L[j];
    }
    // put e at i
    L[i] = e;
    // increament current size
    curSize++;
}
void ArrayList::clear()
{
    curSize = 0;
}

int ArrayList::max()
{int result;
if (curSize < 2)
{
    result = L[curSize-1];
    cout << "Maximum is " << result << endl;
    return -1;
}
for(int i = 0; i < curSize; i++){
    if (result < L[i])
    {
        result = L[i];
    }
}
if (result == 0)
{
    cout << "ERROR: Value is 0 " << endl;
}
cout << "maxismum is " << result << endl;
return result;
}

int ArrayList::min()
{
    int result;
    if (curSize < 2)
    {
        result = L[curSize - 1];
        cout << "Minimum is " << result << endl;
        return -1;
    }
    int i = 0 ;
    result = L[i];
    do 
    {
        if (result > L[i])
            result = L[i];
            i++;
    } while (i < curSize);
    if(result == 0 )
    {
        cout << "ERROR: Value is 0" <<endl;
    }
    cout << "minimum is " << result << endl;
    return result;
}

void ArrayList::display()
{
    // show L: {?,?}, size : curSize/maxSize
    // L : {1,2,4}, size : 3/5
    cout << "L : {";
    if (curSize <= 0)
        cout << "}, ";
    else
    {
        for (int i = 0; i < curSize; i++)
        {
            cout << L[i];
            if (i < curSize - 1)
                cout << ",";
            else
                cout << "}, ";
        }
    }
    cout << "size: " << curSize << "/" << maxSize << endl;
}