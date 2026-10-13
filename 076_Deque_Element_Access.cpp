/*
◆──────────────────────────────────◆
76. Deque Element Access
◆──────────────────────────────────◆

💡 Remember

Deque provides four common ways to access elements:

1. front()
   Returns the first element.

2. back()
   Returns the last element.

3. at(index)
   Accesses an element with bounds checking.
   It throws std::out_of_range if the index is invalid.

4. operator[] 
   Accesses an element directly without bounds checking.
   An invalid index causes undefined behavior.

Important:
Never access front() or back() on an empty deque.

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

    // Access the first element
    cout << "Front Element : "
         << numbers.front() << endl;

    // Access the last element
    cout << "Back Element : "
         << numbers.back() << endl;

    // Access an element using at()
    cout << "Element At Index 2 : "
         << numbers.at(2) << endl;

    // Access an element using operator[]
    cout << "Element At Index 3 : "
         << numbers[3] << endl;

    // Modify the first element
    numbers.front() = 5;

    // Modify the last element
    numbers.back() = 55;

    cout << "After Modification : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    // Safely handle an invalid index using at()
    try
    {
        cout << numbers.at(10) << endl;
    }
    catch (const out_of_range& error)
    {
        cout << "Exception : Invalid index" << endl;
    }

    return 0;
}

/*
▶ Execution Output

Front Element : 10
Back Element : 50
Element At Index 2 : 30
Element At Index 3 : 40
After Modification : 5 20 30 40 55
Exception : Invalid index

*/