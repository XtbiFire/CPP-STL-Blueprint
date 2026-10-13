/*
◆───────────────────────────────◆
44. pop_front()
◆───────────────────────────────◆

💡 Remember

The pop_front() function removes
the first element of a list.

The remaining elements keep
their original order.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    // Create a List
    list<int> numbers = {10, 20, 30, 40};

    // Remove the First Element (10)
    numbers.pop_front();

    // Display Remaining Elements
    cout << "List : ";

    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

List : 20 30 40
*/