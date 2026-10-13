/*
◆───────────────────────────────◆
45. insert()
◆───────────────────────────────◆

💡 Remember

The insert() function adds
elements before a specified position.

It does not replace existing elements.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 40, 50};

    // Find the Position of Element 40
    auto it = numbers.begin();
    advance(it, 2);

    // Insert 30 Before Element 40
    numbers.insert(it, 30);

    // Display the Updated List
    cout << "List : ";

    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

List : 10 20 30 40 50
*/