#include "HeapType.h"

template <class ItemType>
void Swap(ItemType& one, ItemType& two)
{
    ItemType temp;
    temp = one;
    one = two;
    two = temp;
}

template <class ItemType>
void HeapType<ItemType>::ReheapUp(int root,int bottom)
{
    int parent;

    if(bottom > root)
    {
        parent= (bottom-1)/2;
        if(elements[parent]<elements[bottom])
        {
            Swap(elements[parent],elements[bottom]);
            ReheapUp(root,parent); ///Changing the index of bottom in an increasing order

        }
    }
}


template <class ItemType>
void HeapType<ItemType>::ReheapDown(int root,int bottom)
{
    int maxChild;
    int leftChild;
    int rightChild;

    leftChild = 2*root+1;
    rightChild = 2*root+2;

    if(leftChild<=bottom) /// why leftChild?! why not root? Because if the leftChild of the root is greater than bottom that means it's a leaf node
                          /// on where we will stop recursion. So we will go through until leftChild is less than or equal to bottom
    {
        if(leftChild==bottom)
            maxChild = leftChild;
        else
        {
            if(elements[leftChild] <= elements[rightChild])
                maxChild = rightChild;
            else
                maxChild = leftChild;
        }
        if(elements[root] < elements[maxChild])
        {
            Swap(elements[root],elements[maxChild]);
            ReheapDown(maxChild,bottom); ///Changing the index of root here in a decreasing order
        }
    }
}

