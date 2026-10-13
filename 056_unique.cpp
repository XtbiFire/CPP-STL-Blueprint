/*
◆───────────────────────────────◆
56. unique()
◆───────────────────────────────◆

💡 Remember

unique() removes consecutive
duplicate elements.

It does not remove every duplicate
from the entire list unless duplicates
are next to each other.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 10, 20, 20, 10, 30, 30};

    // Remove Consecutive Duplicates
    numbers.unique();

    cout << "List : ";
    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

List : 10 20 10 30
*/