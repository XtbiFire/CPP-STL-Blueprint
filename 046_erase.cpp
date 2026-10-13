/*
◆───────────────────────────────◆
46. erase()
◆───────────────────────────────◆

💡 Remember

The erase() function removes
an element or a range of elements
from a list.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30, 40, 50};

    // Find the Position of Element 30
    auto it = numbers.begin();
    advance(it, 2);

    // Remove Element 30
    numbers.erase(it);

    // Display Remaining Elements
    cout << "List : ";

    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

List : 10 20 40 50
*/