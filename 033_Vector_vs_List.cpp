/*
◆───────────────────────────────◆
33. Vector vs List
◆───────────────────────────────◆

💡 Remember

Both std::vector and std::list
are Sequence Containers.

But their internal working
is completely different.

Choose the container according
to the problem.

🌐 Code
*/

#include <iostream>
#include <vector>
#include <list>

using namespace std;

// Main Function
int main()
{
    vector<int> v = {10, 20, 30};

    list<int> l = {10, 20, 30};

    cout << "Vector : ";

    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;

    cout << "List   : ";

    for (int x : l)
    {
        cout << x << " ";
    }

    return 0;
}

/*

▶ Execution Output

Vector : 10 20 30
List   : 10 20 30

*/