/*
◆───────────────────────────────◆
57. reverse()
◆───────────────────────────────◆

💡 Remember

reverse() reverses the order
of all elements in a list.

The last element becomes first,
and the first element becomes last.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30, 40};

    // Reverse the List
    numbers.reverse();

    cout << "Reversed List : ";
    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

Reversed List : 40 30 20 10
*/