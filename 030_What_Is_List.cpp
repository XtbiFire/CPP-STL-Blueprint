/*
◆───────────────────────────────◆
30. What is std::list?
◆───────────────────────────────◆

💡 Remember

std::list is a Sequence Container
of the C++ Standard Template
Library (STL).

It stores elements using a
Doubly Linked List.

Unlike vector, elements are
not stored in contiguous memory.

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
