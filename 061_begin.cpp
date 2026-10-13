/*
◆───────────────────────────────◆
61. begin()
◆───────────────────────────────◆

💡 Remember

begin() returns an iterator
to the first element of a list.

The iterator can be used
to access or modify that element.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30};

    // Get an Iterator to the First Element
    auto it = numbers.begin();

    // Access the Element Using the Iterator
    cout << "First Element : " << *it;

    return 0;
}

/*
▶ Execution Output

First Element : 10
*/