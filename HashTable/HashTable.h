#if !defined(_HAHSTABLE_H_)
#define _HAHSTABLE_H_

#include "../ArrayList/ArrayList.h"
#define HASH_DEFAULT_SIZE 5
#define REHASH_THRESHOLD 80.0f
#define REHASH_EXPAND 2.0f

class HashTable
{
private:
    ArrayList *table;
    int maxsize;
    int cursize;

public:
    HashTable(int maxsize = HASH_DEFAULT_SIZE);
    ~HashTable();

    void display();
    void addkey(int key);
    int searchkey(int key);

private:
    int hashFuntion(int key, int n, int i);
    void rehashing();
    int probingFunction(int i);
};




#endif // _HAHSTABLE_H_
