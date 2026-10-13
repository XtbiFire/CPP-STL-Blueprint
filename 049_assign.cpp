/*
◆───────────────────────────────◆
49. assign()
◆───────────────────────────────◆

💡 Remember

assign() replaces the existing
list elements with new values.

It can assign repeated values
or values from another range.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30};

    // Replace All Elements with Four 5s
    numbers.assign(4, 5);

    // Display the New List
    cout << "List : ";

    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

List : 5 5 5 5
*/