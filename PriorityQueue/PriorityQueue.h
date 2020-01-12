#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "HeapType.h"


class FullQueue
{

};

class EmptyQueue
{

};

template <class ItemType>
class PriorityQueue
{
    public:
        PriorityQueue();
        PriorityQueue(int);
        ~PriorityQueue();
        void MakeEmpty();
        bool IsFull() const;
        bool IsEmpty() const;
        void EnQueue(ItemType);
        void DeQueue(ItemType&);


    protected:

    private:
        int length;
        HeapType<ItemType> items;
        int maxItems;
};

#endif // PRIORITYQUEUE_H
