/*
◆───────────────────────────────◆
48. resize()
◆───────────────────────────────◆

💡 Remember

resize() changes the number
of elements in a list.

A smaller size removes elements
from the end.

A larger size adds elements
at the end.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30};

    // Increase Size: New Elements Are 0
    numbers.resize(5);

    cout << "After Increase : ";
    for (int x : numbers)
        cout << x << " ";

    cout << endl;

    // Decrease Size: Extra Elements Are Removed
    numbers.resize(2);

    cout << "After Decrease : ";
    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

After Increase : 10 20 30 0 0
After Decrease : 10 20
*/