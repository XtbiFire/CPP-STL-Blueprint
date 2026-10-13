/*
◆───────────────────────────────◆
68. Common Mistakes
◆───────────────────────────────◆

💡 Remember

Do not call front(), back(),
pop_front(), or pop_back()
on an empty list.

Do not dereference end() or rend().
They are stopping positions,
not actual elements.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers;

    // Check Before Accessing Elements
    if (!numbers.empty())
    {
        cout << numbers.front() << endl;
        numbers.pop_back();
    }
    else
    {
        cout << "List is empty" << endl;
    }

    // Add an Element
    numbers.push_back(100);

    // Safe Access After Checking
    if (!numbers.empty())
    {
        cout << "First Element : "
             << numbers.front() << endl;
    }

    return 0;
}

/*
▶ Execution Output

List is empty
First Element : 100
*/