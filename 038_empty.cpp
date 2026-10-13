/*
◆───────────────────────────────◆
38. empty()
◆───────────────────────────────◆

💡 Remember

The empty() function checks
whether a list contains elements.

It returns true if the list
is empty.

It returns false if the list
contains one or more elements.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

// Main Function
int main()
{
    // Create an Empty List
    list<int> numbers;

    // Check Whether the List Is Empty
    cout << "Is List Empty : "
         << boolalpha << numbers.empty() << endl;

    // Add Elements to the List
    numbers.push_back(10);
    numbers.push_back(20);

    // Check the List Again
    cout << "Is List Empty : "
         << numbers.empty() << endl;

    return 0;
}

/*

▶ Execution Output

Is List Empty : true
Is List Empty : false

*/