/*
◆───────────────────────────────◆
47. clear()
◆───────────────────────────────◆

💡 Remember

The clear() function removes
all elements from a list.

The list becomes empty,
but it remains usable.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30};

    // Remove All Elements
    numbers.clear();

    // Check the List
    cout << "List Size : " << numbers.size() << endl;
    cout << "Is Empty : " << boolalpha
         << numbers.empty() << endl;

    return 0;
}

/*
▶ Execution Output

List Size : 0
Is Empty : true
*/