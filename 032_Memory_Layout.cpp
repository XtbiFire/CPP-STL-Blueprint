/*
◆───────────────────────────────◆
32. Memory Layout
◆───────────────────────────────◆

💡 Remember

std::list does not store
elements in contiguous memory.

Each element is stored inside
a separate Node.

Nodes are connected using
Previous and Next pointers.

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