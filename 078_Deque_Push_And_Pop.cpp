/*
◆──────────────────────────────────◆
78. Deque Push and Pop Operations
◆──────────────────────────────────◆

💡 Remember

Deque supports insertion and removal at both ends.

1. push_front(value)
   Adds an element at the beginning.

2. push_back(value)
   Adds an element at the end.

3. pop_front()
   Removes the first element.

4. pop_back()
   Removes the last element.

Important:
pop_front() and pop_back() do not return the removed value.
Never call them on an empty deque.

🌐 Code
*/

#include <iostream>
#include <deque>

using namespace std;

// Main Function
int main()
{
    deque<int> numbers = {10, 20, 30};

    // Add an element at the front
    numbers.push_front(5);

    // Add an element at the back
    numbers.push_back(40);

    cout << "After Push Operations : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    // Remove the first element
    numbers.pop_front();

    // Remove the last element
    numbers.pop_back();

    cout << "After Pop Operations : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    // Check whether the deque has elements before removing
    if (!numbers.empty())
    {
        numbers.pop_front();
    }

    cout << "After Another Pop Front : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

/*
▶ Execution Output

After Push Operations : 5 10 20 30 40
After Pop Operations : 10 20 30
After Another Pop Front : 20 30

*/