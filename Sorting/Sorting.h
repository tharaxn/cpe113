#if !defined(_SORTING_H)
#define _SORTING_H
#define DEFAULT_SIZE 500
#include"../ArrayList/ArrayList.h"
#include <stdlib.h>
#include<time.h>

class Sorting
{
    private :
    ArrayList *data;
    ArrayList *temp;
    int maxSize;

    int swapCouter;
    int loopCounter;
    double timeElasped;

    public :
     Sorting(int maxSize = DEFAULT_SIZE);
     ~Sorting();
     
     void resetCounter();
     void selection();
     void display();
     void displaySwapCouter();
     void displayloopCouter();
     void displaytime();
     void random();
     void backup();
     void restore();

    private:
     void swap(int i,int j);
     int findMaxIndex(int n);
     int findMinIndex(int iStart, int k);
     void insert(int n);
     void bubble_(int n);
     void selectK( int k);
     void copyArray(ArrayList *src, ArrayList *dest,int begin ,int end);
     void merge_(ArrayList *data, ArrayList *result,int begin ,int end);
     void quick_(int begin, int end);
     int pickPivotIndex(int begin, int end);

     public:
        void seletion(bool verbose = false);
        void Insertion();
        void bubble();
        void shell();
        void merge();
        void quick();
};

#endif // _SORTING_H
