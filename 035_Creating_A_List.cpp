/*
◆───────────────────────────────◆
35. Creating A List
◆───────────────────────────────◆

💡 Remember

Before storing data, a std::list
must be created.

A list can be created in
different ways.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

// Main Function
int main()
{
    // Empty List
    list<int> numbers;

    // List with Initial Values
    list<int> marks = {90, 85, 95};

    cout << "Numbers List Size : "
         << numbers.size() << endl;

    cout << "Marks : ";

    for (int x : marks)
    {
        cout << x << " ";
    }

    return 0;
}

/*

▶ Execution Output

Numbers List Size : 0
Marks : 90 85 95

*/