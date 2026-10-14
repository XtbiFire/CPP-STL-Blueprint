/*
◆──────────────────────────────────◆
82. Deque Size, Empty and Element Access Safety
◆──────────────────────────────────◆

💡 Remember

size()
Returns the number of elements.

empty()
Returns true if the deque contains no elements.

at(index)
Checks whether the index is valid and throws
out_of_range when it is not.

operator[]
Accesses an element without checking the index.

Important:
Always check empty() before using front(), back(),
or removing elements from a deque that might be empty.

🌐 Code
*/

#include <iostream>
#include <deque>
#include <stdexcept>

using namespace std;

// Main Function
int main()
{
    deque<int> numbers = {10, 20, 30};

    // Display the number of elements
    cout << "Deque Size : "
         << numbers.size() << endl;

    // Check whether the deque is empty
    cout << "Is Empty : "
         << (numbers.empty() ? "Yes" : "No") << endl;

    // Check before accessing the first element
    if (!numbers.empty())
    {
        cout << "Front Element : "
             << numbers.front() << endl;
    }

    // Access an element safely using at()
    try
    {
        cout << "Element At Index 2 : "
             << numbers.at(2) << endl;
    }
    catch (const out_of_range&)
    {
        cout << "Invalid Index" << endl;
    }

    // Remove all elements
    numbers.clear();

    cout << "Size After Clear : "
         << numbers.size() << endl;

    cout << "Is Empty After Clear : "
         << (numbers.empty() ? "Yes" : "No") << endl;

    // Do not access front() or back() when empty
    if (numbers.empty())
    {
        cout << "Deque is empty; no element to access."
             << endl;
    }

    return 0;
}

/*
▶ Execution Output

Deque Size : 3
Is Empty : No
Front Element : 10
Element At Index 2 : 30
Size After Clear : 0
Is Empty After Clear : Yes
Deque is empty; no element to access.

*/