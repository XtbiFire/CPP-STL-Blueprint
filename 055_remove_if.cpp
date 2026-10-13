/*
◆───────────────────────────────◆
55. remove_if()
◆───────────────────────────────◆

💡 Remember

remove_if() removes every element
that satisfies a condition.

The condition is provided
as a function or lambda.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 15, 20, 25, 30, 35};

    // Remove Every Even Number
    numbers.remove_if([](int x)
    {
        return x % 2 == 0;
    });

    cout << "List : ";
    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

List : 15 25 35
*/