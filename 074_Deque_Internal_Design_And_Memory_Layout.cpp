/*
◆──────────────────────────────────◆
74. Deque Internal Design and Memory Layout
◆──────────────────────────────────◆

💡 Remember

A deque (Double-Ended Queue) commonly stores
elements in multiple memory blocks instead
of one single continuous memory block.

The internal structure helps deque support:
1. Fast access using an index.
2. Efficient insertion at the front.
3. Efficient insertion at the back.

Important:
The exact memory layout depends on the
C++ standard library implementation.

🌐 Code
*/

#include <iostream>
#include <deque>

using namespace std;

// Main Function
int main()
{
    // Create a deque with five elements
    deque<int> numbers = {10, 20, 30, 40, 50};

    // Display all elements
    cout << "Deque Elements : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    // Access an element directly using its index
    cout << "Element At Index 3 : "
         << numbers[3] << endl;

    // Display the first element
    cout << "Front Element : "
         << numbers.front() << endl;

    // Display the last element
    cout << "Back Element : "
         << numbers.back() << endl;

    // Add elements at both ends
    numbers.push_front(5);
    numbers.push_back(60);

    cout << "After Adding At Both Ends : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

/*
▶ Execution Output

Deque Elements : 10 20 30 40 50
Element At Index 3 : 40
Front Element : 10
Back Element : 50
After Adding At Both Ends : 5 10 20 30 40 50 60

*/