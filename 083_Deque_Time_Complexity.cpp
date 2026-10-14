/*
◆──────────────────────────────────◆
83. Deque Time Complexity
◆──────────────────────────────────◆

💡 Remember

Common deque operation complexities:

- front() / back()       : O(1)
- at() / operator[]      : O(1)
- push_front()           : O(1) amortized
- push_back()            : O(1) amortized
- pop_front()            : O(1)
- pop_back()             : O(1)
- Search for a value     : O(n)
- Insert in the middle   : O(n)
- Erase in the middle    : O(n)

Note:
Complexity describes how work grows with the number
of elements. Exact performance depends on the
implementation and operation.

🌐 Code
*/

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

// Main Function
int main()
{
    deque<int> numbers = {10, 20, 30, 40, 50};

    // Constant-time indexed access
    cout << "Element At Index 2 : "
         << numbers[2] << endl;

    // Access the front and back
    cout << "Front : " << numbers.front() << endl;
    cout << "Back : " << numbers.back() << endl;

    // Add elements at both ends
    numbers.push_front(5);
    numbers.push_back(60);

    cout << "After Push Operations : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    // Linear search: may inspect every element
    auto it = find(numbers.begin(), numbers.end(), 40);

    if (it != numbers.end())
    {
        cout << "Found 40" << endl;
    }
    else
    {
        cout << "40 Not Found" << endl;
    }

    // Middle insertion generally requires shifting elements
    numbers.insert(numbers.begin() + 3, 25);

    cout << "After Middle Insert : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

/*
▶ Execution Output

Element At Index 2 : 30
Front : 10
Back : 50
After Push Operations : 5 10 20 30 40 50 60
Found 40
After Middle Insert : 5 10 20 25 30 40 50 60

*/