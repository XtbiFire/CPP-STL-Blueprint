/*
◆───────────────────────────────◆
43. pop_back()
◆───────────────────────────────◆

💡 Remember

The pop_back() function removes
the last element of a list.

If the list is empty, do not call
pop_back().

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Create a List
    list<int> numbers = {10, 20, 30, 40};

    // Remove the Last Element (40)
    numbers.pop_back();

    // Display Remaining Elements
    cout << "List : ";

    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

List : 10 20 30
*/