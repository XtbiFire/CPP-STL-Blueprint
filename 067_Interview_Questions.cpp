/*
◆───────────────────────────────◆
67. Interview Questions
◆───────────────────────────────◆

💡 Remember

std::list is a doubly linked list.

It supports efficient insertion
and removal at known positions.

It does not support random access
using an index like vector does.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30};

    // Question: How Do You Insert at the Front?
    numbers.push_front(5);

    // Question: How Do You Remove the Last Element?
    numbers.pop_back();

    // Question: How Do You Check the Number of Elements?
    cout << "Size : " << numbers.size() << endl;

    cout << "List : ";
    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

Size : 3
List : 5 10 20
*/