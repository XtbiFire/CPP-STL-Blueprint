/*
◆──────────────────────────────────◆
80. Deque Insert, Emplace and Erase
◆──────────────────────────────────◆

💡 Remember

insert():
Adds an existing value at a specified position.

emplace():
Constructs an element directly at a specified position.

erase():
Removes an element or a range of elements.

Important:
These operations can invalidate deque iterators.
Middle insertions and erasures can also be expensive
because elements may need to be shifted.

🌐 Code
*/

#include <iostream>
#include <deque>

using namespace std;

// Main Function
int main()
{
    deque<int> numbers = {10, 20, 40, 50};

    // Insert 30 before the element 40
    auto position = numbers.begin() + 2;

    numbers.insert(position, 30);

    cout << "After Insert : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;


    // Construct 25 directly before the element 30
    // Find a fresh iterator after the previous modification
    position = numbers.begin() + 2;

    numbers.emplace(position, 25);

    cout << "After Emplace : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;


    // Remove the element at index 2
    numbers.erase(numbers.begin() + 2);

    cout << "After Erase One : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;


    // Remove elements from index 1 up to, but not including, index 3
    numbers.erase(numbers.begin() + 1,
                  numbers.begin() + 3);

    cout << "After Erase Range : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

/*
▶ Execution Output

After Insert : 10 20 30 40 50
After Emplace : 10 20 25 30 40 50
After Erase One : 10 20 30 40 50
After Erase Range : 10 40 50

*/