/*
◆───────────────────────────────◆
66. Vector vs List Comparison
◆───────────────────────────────◆

💡 Remember

vector stores elements contiguously
in memory and supports fast indexing.

list is a doubly linked list.
It does not support direct indexing.

list allows efficient insertion
and removal when the position is known.

🌐 Code
*/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> numbersVector = {10, 20, 30};
    list<int> numbersList = {10, 20, 30};

    // Vector Supports Indexing
    cout << "Vector First : "
         << numbersVector[0] << endl;

    // List Uses front() to Access the First Element
    cout << "List First : "
         << numbersList.front() << endl;

    // Both Containers Can Add at the End
    numbersVector.push_back(40);
    numbersList.push_back(40);

    cout << "Vector Size : " << numbersVector.size() << endl;
    cout << "List Size : " << numbersList.size();

    return 0;
}

/*
▶ Execution Output

Vector First : 10
List First : 10
Vector Size : 4
List Size : 4
*/