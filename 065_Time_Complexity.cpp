/*
◆───────────────────────────────◆
65. Time Complexity
◆───────────────────────────────◆

💡 Remember

Time complexity describes how
the work changes as data grows.

For std::list:
front(), back(), push_front(),
push_back(), pop_front(), pop_back()
take constant time: O(1).

Searching for a value takes O(n).

Sorting takes O(n log n).

🌐 Code
*/

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    list<int> numbers = {50, 10, 40, 20, 30};

    // O(1): Access the First Element
    cout << "First : " << numbers.front() << endl;

    // O(1): Add an Element at the End
    numbers.push_back(60);

    // O(n): Search Through the List
    auto it = find(numbers.begin(), numbers.end(), 40);

    cout << "Found 40 : "
         << boolalpha << (it != numbers.end()) << endl;

    // O(n log n): Sort the List
    numbers.sort();

    cout << "Sorted : ";
    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

First : 50
Found 40 : true
Sorted : 10 20 30 40 50 60
*/