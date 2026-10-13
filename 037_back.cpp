/*
◆───────────────────────────────◆
037. list::back()
◆───────────────────────────────◆

💡 Remember

back() returns a reference to the last
element of the list.

It does not remove the element.

Time Complexity: O(1)

⚠️ Calling back() on an empty list
causes undefined behavior.

◆───────────────────────────────◆
*/

#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create a list containing three elements
    list<int> numbers = {10, 20, 30};

    // back() accesses the last element
    cout << "Last Element: " << numbers.back() << '\n';

    // back() does not remove the last element
    cout << "List Size: " << numbers.size() << '\n';

    return 0;
}

/*
▶ Output

Last Element: 30
List Size: 3
*/