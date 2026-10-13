/*
◆──────────────────────────────────◆
75. Deque vs Vector vs List
◆──────────────────────────────────◆

💡 Remember

vector:
- Stores elements in contiguous memory.
- Supports fast random access.
- Adding at the back is usually efficient.
- Inserting at the front requires shifting elements.

deque:
- Supports fast random access.
- Efficiently adds and removes elements at both ends.
- Does not guarantee contiguous storage.

list:
- Uses a doubly linked structure.
- Supports insertion and removal at both ends.
- Does not support random access using indexes.
- Insertion and removal are efficient when the
  required position is already known.

🌐 Code
*/

#include <iostream>
#include <vector>
#include <deque>
#include <list>

using namespace std;

// Main Function
int main()
{
    // Create a vector
    vector<int> numbersVector = {10, 20, 30};

    // Create a deque
    deque<int> numbersDeque = {10, 20, 30};

    // Create a list
    list<int> numbersList = {10, 20, 30};


    // Add an element at the back of the vector
    numbersVector.push_back(40);

    // Add elements at both ends of the deque
    numbersDeque.push_front(5);
    numbersDeque.push_back(40);

    // Add elements at both ends of the list
    numbersList.push_front(5);
    numbersList.push_back(40);


    // Display vector elements
    cout << "Vector : ";

    for (int x : numbersVector)
    {
        cout << x << " ";
    }

    cout << endl;


    // Display deque elements
    cout << "Deque : ";

    for (int x : numbersDeque)
    {
        cout << x << " ";
    }

    cout << endl;


    // Display list elements
    cout << "List : ";

    for (int x : numbersList)
    {
        cout << x << " ";
    }

    cout << endl;


    // Vector and deque support indexed access
    cout << "Vector Index 1 : "
         << numbersVector[1] << endl;

    cout << "Deque Index 1 : "
         << numbersDeque[1] << endl;

    // List does not support numbersList[1]
    // Use an iterator to access its second element
    auto it = numbersList.begin();
    ++it;

    cout << "List Second Element : "
         << *it << endl;

    return 0;
}

/*
▶ Execution Output

Vector : 10 20 30 40
Deque : 5 10 20 30 40
List : 5 10 20 30 40
Vector Index 1 : 20
Deque Index 1 : 10
List Second Element : 10

*/