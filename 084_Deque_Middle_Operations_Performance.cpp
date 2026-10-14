/*
◆──────────────────────────────────◆
84. Deque Middle Operations and Performance
◆──────────────────────────────────◆

💡 Remember

Deque is efficient at adding and removing elements
at both ends, but middle operations are generally O(n).

Why?
Elements may need to be shifted to make room
for a new element or close a gap after removal.

Use:
- deque for frequent operations at both ends.
- vector for efficient indexed access and
  typically better cache locality.
- list when frequent insertions and removals at
  known positions matter more than indexed access.

🌐 Code
*/

#include <iostream>
#include <deque>

using namespace std;

// Function to display deque elements
void display(const deque<int>& values)
{
    for (int x : values)
    {
        cout << x << " ";
    }

    cout << endl;
}

// Main Function
int main()
{
    deque<int> numbers = {10, 20, 30, 40, 50};

    cout << "Original Deque : ";
    display(numbers);

    // Adding at the front is efficient
    numbers.push_front(5);

    cout << "After Front Insert : ";
    display(numbers);

    // Adding at the back is efficient
    numbers.push_back(60);

    cout << "After Back Insert : ";
    display(numbers);

    // Insert in the middle
    // This can require moving elements
    numbers.insert(numbers.begin() + 3, 25);

    cout << "After Middle Insert : ";
    display(numbers);

    // Erase an element from the middle
    numbers.erase(numbers.begin() + 3);

    cout << "After Middle Erase : ";
    display(numbers);

    return 0;
}

/*
▶ Execution Output

Original Deque : 10 20 30 40 50
After Front Insert : 5 10 20 30 40 50
After Back Insert : 5 10 20 30 40 50 60
After Middle Insert : 5 10 20 25 30 40 50 60
After Middle Erase : 5 10 20 30 40 50 60

*/