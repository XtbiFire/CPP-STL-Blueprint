/*
◆───────────────────────────────◆
50. swap()
◆───────────────────────────────◆

💡 Remember

The swap() function exchanges
the contents of two lists.

The elements are not copied
one by one.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> first = {10, 20};
    list<int> second = {30, 40};

    // Exchange the Contents
    first.swap(second);

    cout << "First List : ";
    for (int x : first)
        cout << x << " ";

    cout << endl;

    cout << "Second List : ";
    for (int x : second)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

First List : 30 40
Second List : 10 20
*/