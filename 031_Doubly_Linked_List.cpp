/*
◆───────────────────────────────◆
31. Doubly Linked List
◆───────────────────────────────◆

💡 Remember

std::list is implemented using
a Doubly Linked List.

Each Node stores:

1. Previous Address
2. Data
3. Next Address

This allows movement in both
forward and backward directions.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

// Main Function
int main()
{
    list<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    for (int x : numbers)
    {
        cout << x << " ";
    }

    return 0;
}

/*

▶ Execution Output

10 20 30

*/