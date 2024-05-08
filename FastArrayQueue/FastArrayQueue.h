#if !defined(_FASTARRAYQUEUE_H)
#define _FASTARRAYQUEUE_H
#define DEFAULT_MAX_SIZE 5
class FastArrayQueue
{
    private:
        int *L;
        int curSize;
        int maxSize;
        int in;
        int out;

    public:
        FastArrayQueue(int maxSize = DEFAULT_MAX_SIZE);
        ~FastArrayQueue();

        void enQueue(int e);
        int deQueue();
        int front();
        int rear();

        void display();


};


#endif // _FASTARRAYQUEUE_H
