/*
◆───────────────────────────────◆
64. rend()
◆───────────────────────────────◆

💡 Remember

rend() returns a reverse iterator
to the position before the first
element in reverse traversal.

It is a stopping position,
not an element to dereference.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30};

    // Traverse from Last to First
    for (auto it = numbers.rbegin();
         it != numbers.rend(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}

/*
▶ Execution Output

30 20 10
*/