#ifndef PQ_H
#define PQ_H

#include "BinaryHeap.h"
#include "dsexceptions.h"

template <typename Object>
class PQ
{
    public:
        //The item-priority class
        class Entry
        {
            public:
            Object item;
            int priority;
            Entry()
            {
            }

            Entry(Object i, int n)
            {
                item = i;
                priority = n;
            }

                //Comparison operator
                friend bool operator< (const Entry& left, const Entry& right)
                {
                    return left.priority < right.priority;
                }

        };

        //Check if the heap is empty
        bool isEmpty()
        {
            return heap.isEmpty();
        }

        //Make the heap empty
        void makeEmpty()
        {
            heap.makeEmpty();
        }

        //Insert an item priority pair into the heap
        void insert(Object & item, int priority){
            Entry x = Entry(item, priority);
            heap.insert(x);
        }

        //Remove and return the minimum element of the heap
        Object & extractMin()
        {
            //Throw error if heap is empty
            if(isEmpty())
            {
                throw UnderflowException{ };
            }
            Entry x = heap.findMin();
            //Copy the object value
            min = x.item;

            heap.deleteMin();
            return min;

        }

        private:
            BinaryHeap<Entry> heap;
            //Store minimum element for extractMin()
            Object min;

};

#endif
