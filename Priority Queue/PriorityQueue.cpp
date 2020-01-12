#include "PriorityQueue.h"
#include "HeapType.h"


template <class ItemType>
PriorityQueue<ItemType>::PriorityQueue()
{
    maxItems = 500;
    length = 0;
    items.elements = new ItemType[maxItems];
}


template <class ItemType>
PriorityQueue<ItemType>::PriorityQueue(int max)
{
    maxItems = max;
    length = 0;
    items.elements = new ItemType[maxItems];
}


template <class ItemType>
void PriorityQueue<ItemType>::MakeEmpty()
{
    length = 0;
}


template <class ItemType>
bool PriorityQueue<ItemType>::IsFull() const
{
    return (length==maxItems);
}

template <class ItemType>
bool PriorityQueue<ItemType>::IsEmpty() const
{
    return (length==0);
}

template <class ItemType>
void PriorityQueue<ItemType>::EnQueue(ItemType newItem)
{
    if(IsFull())
        throw FullQueue();
    else
    {
        length++;
        items.elements[length-1] = newItem;
        items.ReheapUp(0,length-1);
    }
}


template <class ItemType>
void PriorityQueue<ItemType>::DeQueue(ItemType& item)
{
    if(IsEmpty())
        throw EmptyQueue();
    else
    {
        item  =items.elements[0];
        items.elements[0] = items.elements[length-1];
        length--;
        items.ReheapDown(0,length-1);
    }
}


template <class ItemType>
PriorityQueue<ItemType>::~PriorityQueue()
{
    delete [] items.elements;
}
