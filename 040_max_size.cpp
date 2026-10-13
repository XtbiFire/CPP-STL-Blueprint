/*
◆───────────────────────────────◆
40. max_size()
◆───────────────────────────────◆

💡 Remember

The max_size() function returns
the maximum number of elements
that a list can theoretically hold.

The value depends on the system
and the C++ implementation.

It does not tell how many elements
the list currently contains.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

// Main Function
int main()
{
    // Create a List
    list<int> numbers = {10, 20, 30};

    // Display the Current List Size
    cout << "List Size : "
         << numbers.size() << endl;

    // Display the Theoretical Maximum Size
    cout << "Maximum List Size : "
         << numbers.max_size() << endl;

    return 0;
}

/*

▶ Execution Output

List Size : 3
Maximum List Size : Implementation-dependent

Note:
The actual max_size() value is
system and implementation dependent.

*/