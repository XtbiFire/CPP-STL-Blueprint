/*
◆───────────────────────────────◆
036. list::front()
◆───────────────────────────────◆

💡 Remember

front() returns a reference to the first
element of the list.

It does not remove the element.

Time Complexity: O(1)

⚠️ Calling front() on an empty list
causes undefined behavior.

◆───────────────────────────────◆
*/

#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create a list containing three elements
    list<int> numbers = {10, 20, 30};

    // front() accesses the first element
    cout << "First Element: " << numbers.front() << '\n';

    // front() does not remove the first element
    cout << "List Size: " << numbers.size() << '\n';

    return 0;
}

/*
▶ Output

First Element: 10
List Size: 3
*/