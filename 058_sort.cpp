/*
◆───────────────────────────────◆
58. sort()
◆───────────────────────────────◆

💡 Remember

sort() arranges list elements
in ascending order by default.

Use greater<int>() to sort
in descending order.

🌐 Code
*/

#include <iostream>
#include <list>
#include <functional>

using namespace std;

int main()
{
    list<int> numbers = {40, 10, 30, 20};

    // Sort from Smallest to Largest
    numbers.sort();

    cout << "Ascending : ";
    for (int x : numbers)
        cout << x << " ";

    cout << endl;

    // Sort from Largest to Smallest
    numbers.sort(greater<int>());

    cout << "Descending : ";
    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

Ascending : 10 20 30 40
Descending : 40 30 20 10
*/