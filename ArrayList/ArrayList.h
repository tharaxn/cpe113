#if !defined(_ARRAYLIST_H_)
#define _ARRAYLIST_H_

#define DEFAULT_MAX_SIZE 5

class ArrayList{

private:

int *L;
int maxSize;
int curSize;

public:

ArrayList(int maxSize = DEFAULT_MAX_SIZE);
~ArrayList();
int size(); 
int indexOf(int e);
int get(int i); 
void set(int i, int e);
int remove(int i); 
void add(int i, int e);
void clear();
int max();
int min();

void display();
};


#endif // _ARRAYLIST_H_
