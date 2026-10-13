/*
◆──────────────────────────────────◆
77. Deque Iterators and Invalidation
◆──────────────────────────────────◆

💡 Remember

Iterators behave like pointers and help us
move through deque elements.

Common iterator operations:
- begin() : Points to the first element.
- end()   : Points just after the last element.
- ++it    : Moves to the next element.
- *it     : Accesses the element at the iterator.

Important iterator invalidation rules:
- Inserting at either end invalidates all iterators.
- Erasing at either end invalidates iterators to erased
  elements and may invalidate the past-the-end iterator.
- Middle insertions and erasures can invalidate iterators
  and references, depending on the operation.
- Reacquire iterators after operations that invalidate them.

🌐 Code
*/

#include <iostream>
#include <deque>

using namespace std;

// Main Function
int main()
{
    deque<int> numbers = {10, 20, 30, 40, 50};

    // begin() points to the first element
    auto it = numbers.begin();

    cout << "First Element : " << *it << endl;

    // Move the iterator to the next element
    ++it;

    cout << "Second Element : " << *it << endl;

    // Traverse the deque using an iterator
    cout << "Deque Elements : ";

    for (auto current = numbers.begin();
         current != numbers.end();
         ++current)
    {
        cout << *current << " ";
    }

    cout << endl;

    // Insert at the front.
    // This invalidates existing deque iterators.
    numbers.push_front(5);

    // Get a fresh iterator after the modification
    auto freshIt = numbers.begin();

    cout << "First Element After Insertion : "
         << *freshIt << endl;

    return 0;
}

/*
▶ Execution Output

First Element : 10
Second Element : 20
Deque Elements : 10 20 30 40 50
First Element After Insertion : 5

*/