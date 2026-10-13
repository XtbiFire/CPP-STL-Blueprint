/*
◆───────────────────────────────◆
69. Practice Problems
◆───────────────────────────────◆

💡 Remember

Practice by combining list functions.

This program removes duplicate
values, sorts the list, and
displays the final result.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {30, 10, 20, 10, 40, 20};

    // Sort So Equal Values Become Consecutive
    numbers.sort();

    // Remove Consecutive Duplicate Values
    numbers.unique();

    // Display the Final List
    cout << "Unique Sorted List : ";

    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

Unique Sorted List : 10 20 30 40
*/