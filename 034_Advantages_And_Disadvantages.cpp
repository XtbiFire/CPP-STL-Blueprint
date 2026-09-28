/*
◆───────────────────────────────◆
34. Advantages And Disadvantages
◆───────────────────────────────◆

💡 Remember

Every STL Container has its own
Advantages and Disadvantages.

There is no perfect Container.

Choose the right Container
according to the problem.

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
    numbers.push_front(5);

    for (int x : numbers)
    {
        cout << x << " ";
    }

    return 0;
}

/*

▶ Execution Output

5 10 20

*/