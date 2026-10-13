/*
◆───────────────────────────────◆
62. end()
◆───────────────────────────────◆

💡 Remember

end() returns an iterator
to the position after the last element.

It does not point to the last element.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30};

    // Begin at the First Element
    auto it = numbers.begin();

    // Move to the Position Before end()
    while (it != numbers.end())
    {
        cout << *it << " ";
        ++it;
    }

    return 0;
}

/*
▶ Execution Output

10 20 30
*/