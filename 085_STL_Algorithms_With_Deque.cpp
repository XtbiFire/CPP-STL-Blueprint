/*
◆──────────────────────────────────◆
85. STL Algorithms with Deque
◆──────────────────────────────────◆

💡 Remember

STL algorithms work with deque iterators.

Common algorithms:
- sort()       : Sorts elements.
- reverse()    : Reverses element order.
- find()       : Searches for a value.
- count()      : Counts matching values.
- min_element(): Finds the smallest element.
- max_element(): Finds the largest element.

Important:
sort() requires random-access iterators.
Deque supports random-access iterators, so sort()
works directly with deque.

🌐 Code
*/

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

// Main Function
int main()
{
    deque<int> numbers = {40, 10, 30, 20, 10};

    // Display the original deque
    cout << "Original : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;


    // Sort elements in ascending order
    sort(numbers.begin(), numbers.end());

    cout << "Sorted : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;


    // Count how many times 10 occurs
    cout << "Count Of 10 : "
         << count(numbers.begin(), numbers.end(), 10)
         << endl;


    // Search for the value 30
    auto it = find(numbers.begin(), numbers.end(), 30);

    if (it != numbers.end())
    {
        cout << "Found : " << *it << endl;
    }
    else
    {
        cout << "Value Not Found" << endl;
    }


    // Find the smallest and largest elements
    cout << "Minimum : "
         << *min_element(numbers.begin(), numbers.end())
         << endl;

    cout << "Maximum : "
         << *max_element(numbers.begin(), numbers.end())
         << endl;


    // Reverse the sorted deque
    reverse(numbers.begin(), numbers.end());

    cout << "Reversed : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}

/*
▶ Execution Output

Original : 40 10 30 20 10
Sorted : 10 10 20 30 40
Count Of 10 : 2
Found : 30
Minimum : 10
Maximum : 40
Reversed : 40 30 20 10 10

*/