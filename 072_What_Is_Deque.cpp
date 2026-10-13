/*
◆───────────────────────────────◆
72. What Is Deque?
◆───────────────────────────────◆

💡 Remember

deque means Double-Ended Queue.

A deque stores elements in sequence
and supports adding or removing
elements at both the front and back.

Unlike list, deque supports
random access using an index.

Unlike vector, deque does not
guarantee that all elements are
stored in one contiguous memory block.

🌐 Code
*/

#include <iostream>
#include <deque>

using namespace std;

// Main Function
int main()
{
    // Create a deque with initial values
    deque<int> numbers = {10, 20, 30};

    // Add an element at the beginning
    numbers.push_front(5);

    // Add an element at the end
    numbers.push_back(40);

    // Access elements directly using indexes
    cout << "First Element : "
         << numbers[0] << endl;

    cout << "Third Element : "
         << numbers[2] << endl;

    // Display all elements from front to back
    cout << "Deque Elements : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

/*

▶ Execution Output

First Element : 5
Third Element : 20
Deque Elements : 5 10 20 30 40

*/