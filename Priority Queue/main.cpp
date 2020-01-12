#include <iostream>

#include "PriorityQueue.h"
#include "PriorityQueue.cpp"
#include "HeapType.h"
#include "HeapType.cpp"

using namespace std;

int main()
{

    PriorityQueue<int> pq(6);

    int N = 5;
    int arr[N] = {10,2,7,5,3};


    ///Sorting using priority queue
    /// Complexity analysis:
                ///---Enqueue:O(Log2^N), For N items it's O(NLOG2^N)
                ///---Dequeue:O(Log2^N), For N items it's O(NLOG2^N)
                ///---Insert into array: O(N)
                ///---Total (if we insert the sorted elements back to array): O(N*(NLOG2^N))
                ///---Else Total: O(NLOG2^N)
    for(int i=0;i<N;i++)
    {
        pq.EnQueue(arr[i]);
    }



    for(int i=0;i<N;i++)
    {
        int temp;
        pq.DeQueue(temp);
        arr[i]  = temp;
        cout<<arr[i]<<" ";

    }





    return 0;
}
