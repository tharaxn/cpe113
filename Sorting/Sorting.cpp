#include "Sorting.h"
#include <iostream>

using namespace std;

Sorting::Sorting(int maxSize)
{
    this ->maxSize = maxSize;
    data = new ArrayList(this->maxSize);
    temp = new ArrayList(this->maxSize);

    swapCouter = 0;
    loopCounter = 0;
    timeElasped = 0.0;

    for (int i=0; i<this->maxSize; i++)
    {
        data->add(i,0);
        temp->add(i,0);
    }   

    srand(time(NULL));     
}

Sorting::~Sorting()
{
    delete data;
    delete temp;

}

void Sorting::selection()
{
    clock_t beginTime = clock();
    for (int nElement = maxSize; nElement > 1; nElement --)
    {
        int maxIndex = findMaxIndex(nElement);
        swap(maxIndex, nElement -1);
    }
    clock_t endTime = clock();
    timeElasped = (endTime - beginTime) / (double)CLOCKS_PER_SEC;

}

void Sorting::resetCounter()
{
    swapCouter = 0; 
    loopCounter = 0; 
    timeElasped = 0.0;
}

void Sorting::display()
{//Data: {0,0,0,0,0,0,0}
    cout <<"Data: {";
    for(int i=0; i<maxSize; i++)
    {
        //cout << data->get(i);
        printf("%2d" , data->get(i));
        if(i<maxSize-1)
            cout <<",";
    }
    cout<< "}" << endl;
}

void Sorting::displaySwapCouter()
{
    cout << "swap data :"<< swapCouter <<"time" << endl;
}

void Sorting::displayloopCouter()
{
    cout << "loop :"<< loopCounter <<"time" << endl;

}

void Sorting::displaytime()
{
    //cout << "data :"<< swapCouter <<"time" << endl;
    printf("Time : %0.9f secon\n", timeElasped);

}

void Sorting::random()
{
    for (int i=0; i<maxSize; i++)
        data ->set(i, rand() % 100);

    backup();
}

void Sorting::backup()
{
    for (int i=0; i<maxSize; i++)
        temp ->set(i, data->get(i));
}

void Sorting::restore()
{
    for (int i=0; i<maxSize; i++)
        data ->set(i, temp->get(i));
}

void Sorting::swap(int i, int j)
{
    int t = data ->get(i);
    data->set(i, data->get(j));
    data->set(j,t);

    swapCouter ++;
}

int Sorting::findMaxIndex(int n)
{
    int maxIndex = 0;
    for (int i=1; i<n; i++)
    {
        if(data->get(maxIndex < data->get(i)))
           maxIndex = i;

        loopCounter ++;
    }
    return maxIndex;
}

int Sorting::findMinIndex(int iStart, int k)
{
    int minIndex = iStart;

    for (int i = iStart + k; i < maxSize; i = i + k)
        {
            if (data->get(i) < data->get(minIndex))
            minIndex = i;

            loopCounter++;
        }
        return minIndex;
    
}

void Sorting::insert(int n)
{
    int insertData = data->get(n-1);
    int insertpos = n-2;
        while (insertpos >=0 && data->get(insertpos) > insertData)
        {
           swap(insertpos , insertpos +1);
           insertpos --;
           loopCounter ++;
        }
}

void Sorting::bubble_(int n)
{
    for (int i = 0; i < n - 1; i ++)
    {
        if (data->get(i)> data->get(i+1))
            swap(i, i+1);

        loopCounter ++;    
    }
}

void Sorting::selectK(int k)
{
    for (int i = 0; i < k; i ++)
     for (int j = i; j < maxSize; j = j + k)
        {
            int iMin = findMinIndex( j, k);
            swap(j, iMin);
        }
}

void Sorting::copyArray(ArrayList *src, ArrayList *dest, int begin, int end)
{
    for (int i=begin; i<end; i++)
    dest->set(i, src->get(i));
}

void Sorting::merge_(ArrayList *data, ArrayList *result, int begin, int end)
{
    if (end-begin <= 0) result;
    int mid = (begin - end ) /2;

    merge_(data, result, begin, mid);
    merge_(data, result, mid + 1, end);

    int i = begin, j=mid + 1;
    for (int k = begin; k <=end; k++)
    {
        loopCounter++;
        if (i>mid)
            result->set(k,data->get(j++));
        else if (j > end)
            result ->set(k, data->get(i++));
        else if (data->get(i)> data -> get(j))
            result->set(k, data->get(i++));
        else
            result->set(k, data->get(i));
    }
    copyArray(result, data, begin, end);

}

void Sorting::quick_(int begin, int end)
{
    if (end - begin <= 0) return;
    int iPivot = pickPivotIndex(begin, end);
    swap(iPivot, end);

    int i = begin, j = end - 1;
    while (i <= j)
    {
        while (i <= j && data->get(i) < data->get(end)) i++;
        while (i <= j && data->get(j) >= data->get(end)) j--;
        if (i < j) swap( i, j);
        loopCounter ++;
    }
    swap(i, end);

    quick_(begin, i - 1);
    quick_(i + 1, end);
}

int Sorting::pickPivotIndex(int begin, int end)
{
    int mid = (begin + end) / 2;
    int a = data->get(begin), b = data->get(mid), c = data->get(end);
        if ((a >= b && b >= c) || (a <= b && b <= c)) 
            return mid;
        else if ((b >= c && c >= a) || (b <= c && c <= a)) 
            return end;
        else if ((c >= a && a >= b) || (c <= a && a <= b)) 
            return begin;
    return mid;
    return 0;
}

void Sorting::seletion(bool verbose)
{
    resetCounter();
   clock_t  beginTime = clock(); 
    for(int nElement = maxSize ; nElement > 1 ; nElement--)
    {
        int maxIndex = findMaxIndex(nElement);
        swap(maxIndex , nElement -1);

        if(verbose) display();
    }
  clock_t  endTime = clock(); 
  timeElasped = (double)(endTime - beginTime ) /(double)CLOCKS_PER_SEC;  
}

void Sorting::Insertion()
{
     resetCounter();
   clock_t  beginTime = clock(); 
    for (int ndata =2; ndata <= maxSize; ndata++)
        insert(ndata);

    clock_t  endTime = clock(); 
  timeElasped = (double)(endTime - beginTime ) /(double)CLOCKS_PER_SEC;
}

void Sorting::bubble()
{
    resetCounter();
   clock_t  beginTime = clock(); 
    for (int nData = maxSize; nData > 1; nData --)
       bubble_(nData);

     clock_t  endTime = clock(); 
  timeElasped = (double)(endTime - beginTime ) /(double)CLOCKS_PER_SEC;   
}

void Sorting::shell()
{
    resetCounter();
   clock_t  beginTime = clock(); 
    for (int k = maxSize / 2; k >= 1; k = k / 2)
    selectK(k);

    clock_t  endTime = clock(); 
  timeElasped = (double)(endTime - beginTime ) /(double)CLOCKS_PER_SEC;

}

void Sorting::merge()
{
    resetCounter();
    clock_t  beginTime = clock();
    ArrayList *tdata = new ArrayList(maxSize);
    for(int i=0; i<maxSize;i++)
    tdata->add(i,0);

    copyArray(data ,tdata ,0 ,maxSize-1);
    merge_(tdata,data,0,maxSize-1);
    delete tdata;
    clock_t  endTime = clock();
    timeElasped = (endTime - beginTime ) /(double)CLOCKS_PER_SEC;
   
}

void Sorting::quick()
{
    resetCounter();
    clock_t  beginTime = clock();
    quick_(0,maxSize - 1);
    clock_t  endTime = clock();
    timeElasped = (endTime - beginTime ) /(double)CLOCKS_PER_SEC;
}
