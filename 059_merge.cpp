/*
◆───────────────────────────────◆
59. merge()
◆───────────────────────────────◆

💡 Remember

merge() combines two sorted lists
into one sorted list.

The elements from the second list
are transferred into the first list.

Both lists must be sorted
according to the same ordering.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> first = {10, 30, 50};
    list<int> second = {20, 40, 60};

    // Merge the Sorted Lists
    first.merge(second);

    cout << "Merged List : ";
    for (int x : first)
        cout << x << " ";

    cout << endl;

    // The Second List Is Now Empty
    cout << "Second List Empty : "
         << boolalpha << second.empty();

    return 0;
}

/*
▶ Execution Output

Merged List : 10 20 30 40 50 60
Second List Empty : true
*/