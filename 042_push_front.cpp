/*
◆───────────────────────────────◆
42. push_front()
◆───────────────────────────────◆

💡 Remember

The push_front() function adds
a new element at the beginning
of a list.

Every new element is added
before the current first element.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

// Main Function
int main()
{
    // Create a List
    list<int> numbers = {30, 40, 50};

    // Add 20 at the Beginning
    numbers.push_front(20);

    // Add 10 at the Beginning
    numbers.push_front(10);

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