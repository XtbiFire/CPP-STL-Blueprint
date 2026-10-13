/*
◆───────────────────────────────◆
63. rbegin()
◆───────────────────────────────◆

💡 Remember

rbegin() returns a reverse iterator
to the last element of a list.

Moving the reverse iterator forward
moves toward the beginning of the list.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30};

    // Start from the Last Element
    auto it = numbers.rbegin();

    // Display the Last Element
    cout << "Last Element : " << *it;

    return 0;
}

/*
▶ Execution Output

Last Element : 30
*/