/*
◆───────────────────────────────◆
41. push_back()
◆───────────────────────────────◆

💡 Remember

The push_back() function adds
a new element at the end of a list.

Every new element is added
after the current last element.

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

    // Add 40 at the End of the List
    numbers.push_back(40);

    // Add 50 at the End of the List
    numbers.push_back(50);

    // Display All List Elements
    cout << "List Elements : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

/*

▶ Execution Output

List Elements : 10 20 30 40 50

*/