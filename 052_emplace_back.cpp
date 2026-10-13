/*
◆───────────────────────────────◆
52. emplace_back()
◆───────────────────────────────◆

💡 Remember

emplace_back() constructs
a new element at the end of a list.

It can construct the element
directly using its arguments.

🌐 Code
*/

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> names = {"Aman"};

    // Construct a String at the End
    names.emplace_back("Ravi");

    names.emplace_back("Neha");

    cout << "Names : ";
    for (const string& name : names)
        cout << name << " ";

    return 0;
}

/*
▶ Execution Output

Names : Aman Ravi Neha
*/