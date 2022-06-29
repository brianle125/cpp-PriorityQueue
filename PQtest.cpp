#include <iostream>
#include <string>
#include "PQ.h"
#include "dsexceptions.h"

using namespace std;

// Test program
int main( )
{
    PQ<string> h;
    PQ<int> numbers;
    vector<string> strings = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh"};
    vector<int> nums = {1,2,3,4,5,6,7};

    cout << "Test string Priority Queue: " << endl;

    cout << "Insertion of 7 elements:" << endl;
    h.insert(strings[0], 1);
    h.insert(strings[1], 7);
    h.insert(strings[2], 3);
    h.insert(strings[3], 4);
    h.insert(strings[4], 2);
    h.insert(strings[5], 5);
    h.insert(strings[6], 6);

    cout << "Expected extractmin order: first, fifth, third, fourth, sixth, seventh, second." << endl;
    cout << "Removing: " <<  h.extractMin() << endl;
    cout << "Removing: " <<  h.extractMin() << endl;
    cout << "Removing: " <<  h.extractMin() << endl;
    cout << "Removing: " <<  h.extractMin() << endl;
    cout << "Removing: " <<  h.extractMin() << endl;
    cout << "Removing: " <<  h.extractMin() << endl;
    cout << "Removing: " <<  h.extractMin() << endl;
    cout << "The heap should be empty after these removals." << endl;

    cout << "Is heap empty: ";
    if(h.isEmpty())
    {
        cout << "Yes." << endl;
    }
    else
    {
        cout << "No, there is at least one element remaining." << endl;
    }

    //Insertion does not work with magic numbers
    cout << "Integer priority queue:" << endl;
    numbers.insert(nums[0],7);
    numbers.insert(nums[1],6);
    numbers.insert(nums[2],5);
    numbers.insert(nums[3],4);
    numbers.insert(nums[4],3);
    numbers.insert(nums[5],2);
    numbers.insert(nums[6],1);

    cout << "Expected extractmin order: 7,6,5,4,3,2" << endl;
    cout << "Removing: " << numbers.extractMin() << endl;
    cout << "Removing: " << numbers.extractMin() << endl;
    cout << "Removing: " << numbers.extractMin() << endl;
    cout << "Removing: " << numbers.extractMin() << endl;
    cout << "Removing: " << numbers.extractMin() << endl;
    cout << "Removing: " << numbers.extractMin() << endl;

    cout << "The heap should not be empty after these removals." << endl;
    cout << "Is the heap empty: ";
    if(numbers.isEmpty())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No, there is at least one element remaining." << endl;
    }


    return 0;
}
