/*
◆───────────────────────────────◆
39. size()
◆───────────────────────────────◆

💡 Remember

The size() function returns
the number of elements in a list.

If a list contains 5 elements,
size() returns 5.

If a list is empty, size()
returns 0.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

// Main Function
int main()
{
    // Create a List
    list<int> numbers = {10, 20, 30, 40, 50};

    // Display the Number of Elements
    cout << "List Size : "
         << numbers.size() << endl;

    // Add One More Element
    numbers.push_back(60);

    // Display the Updated Size
    cout << "Updated List Size : "
         << numbers.size() << endl;

    return 0;
}

/*

▶ Execution Output

List Size : 5
Updated List Size : 6

*/