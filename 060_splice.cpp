/*
◆───────────────────────────────◆
60. splice()
◆───────────────────────────────◆

💡 Remember

splice() transfers elements
from one list to another list.

It can transfer an entire list,
one element, or a range.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> first = {10, 40};
    list<int> second = {20, 30};

    // Find the Position of 40
    auto it = first.begin();
    advance(it, 1);

    // Transfer All Elements of Second
    // Before 40 in the First List
    first.splice(it, second);

    cout << "First List : ";
    for (int x : first)
        cout << x << " ";

    cout << endl;

    cout << "Second List Empty : "
         << boolalpha << second.empty();

    return 0;
}

/*
▶ Execution Output

First List : 10 20 30 40
Second List Empty : true
*/