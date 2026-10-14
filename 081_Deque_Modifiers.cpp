/*
◆──────────────────────────────────◆
81. Deque Modifiers
◆──────────────────────────────────◆

💡 Remember

Deque provides several functions to modify its contents.

1. clear()
   Removes all elements.

2. resize()
   Changes the number of elements.
   New elements are value-initialized or initialized
   using the supplied value.

3. assign()
   Replaces all existing elements with new values.

4. swap()
   Exchanges the contents of two deques.

🌐 Code
*/

#include <iostream>
#include <deque>

using namespace std;

// Main Function
int main()
{
    deque<int> numbers = {10, 20, 30};

    // Resize the deque and fill new elements with 40
    numbers.resize(5, 40);

    cout << "After Resize : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;


    // Replace all elements with four copies of 7
    numbers.assign(4, 7);

    cout << "After Assign : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;


    // Create another deque
    deque<int> other = {100, 200};

    // Exchange the contents of both deques
    numbers.swap(other);

    cout << "Numbers After Swap : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << "Other After Swap : ";

    for (int x : other)
    {
        cout << x << " ";
    }

    cout << endl;


    // Remove all elements from numbers
    numbers.clear();

    cout << "Numbers Size After Clear : "
         << numbers.size() << endl;

    cout << "Numbers Empty : "
         << (numbers.empty() ? "Yes" : "No") << endl;

    return 0;
}

/*
▶ Execution Output

After Resize : 10 20 30 40 40
After Assign : 7 7 7 7
Numbers After Swap : 100 200
Other After Swap : 7 7 7 7
Numbers Size After Clear : 0
Numbers Empty : Yes

*/