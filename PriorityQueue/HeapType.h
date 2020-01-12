#ifndef HEAPTYPE_H
#define HEAPTYPE_H

template <class ItemType>
struct HeapType
{
    void ReheapUp(int root,int bottom);
    void ReheapDown(int root,int bottom);
    ItemType *elements;
    int numOfElements;
};


#endif // HEAPTYPE_H
