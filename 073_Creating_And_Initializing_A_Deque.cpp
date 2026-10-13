/*
◆──────────────────────────────────◆
73. Creating and Initializing a Deque
◆──────────────────────────────────◆

💡 Remember

A deque can be created in different ways.

1. Empty Deque:
   Creates a deque without elements.

2. Initializer List:
   Creates a deque with specific values.

3. Size and Value:
   Creates a deque with a fixed number
   of elements, all containing the same value.

4. Iterator Range:
   Creates a deque by copying elements
   from another container or range.

🌐 Code
*/

#include <iostream>
#include <deque>

using namespace std;

// Main Function
int main()
{
    // 1. Create an empty deque
    deque<int> emptyDeque;

    cout << "Empty Deque Size : "
         << emptyDeque.size() << endl;


    // 2. Initialize a deque with specific values
    deque<int> numbers = {10, 20, 30};

    cout << "Initial Values : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;


    // 3. Create three elements, each initialized to 7
    deque<int> repeated(3, 7);

    cout << "Repeated Values : ";

    for (int x : repeated)
    {
        cout << x << " ";
    }

    cout << endl;


    // 4. Create a deque by copying an iterator range
    deque<int> source = {1, 2, 3};

    // Copy every element from source into rangeCopy
    deque<int> rangeCopy(
        source.begin(),
        source.end()
    );

    cout << "Range Copy : ";

    for (int x : rangeCopy)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

/*
▶ Execution Output

Empty Deque Size : 0
Initial Values : 10 20 30
Repeated Values : 7 7 7
Range Copy : 1 2 3

*/