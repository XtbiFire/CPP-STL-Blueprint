/*
◆───────────────────────────────◆
54. remove()
◆───────────────────────────────◆

💡 Remember

remove(value) removes every
element equal to that value.

Other elements remain in order.

🌐 Code
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers = {10, 20, 10, 30, 10, 40};

    // Remove Every Occurrence of 10
    numbers.remove(10);

    cout << "List : ";
    for (int x : numbers)
        cout << x << " ";

    return 0;
}

/*
▶ Execution Output

List : 20 30 40
*/