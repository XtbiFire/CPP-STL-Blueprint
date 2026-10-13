/*
◆───────────────────────────────◆
51. emplace()
◆───────────────────────────────◆

💡 Remember

emplace() constructs a new element
at a specified position.

It can pass constructor arguments
directly to the element.

🌐 Code
*/

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> names = {"Aman", "Ravi"};

    // Find the Position Before Ravi
    auto it = names.begin();
    advance(it, 1);

    // Construct and Insert a String at That Position
    names.emplace(it, "Neha");

    cout << "Names : ";
    for (const string& name : names)
        cout << name << " ";

    return 0;
}

/*
▶ Execution Output

Names : Aman Neha Ravi
*/