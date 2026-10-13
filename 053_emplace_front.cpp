/*
◆───────────────────────────────◆
53. emplace_front()
◆───────────────────────────────◆

💡 Remember

emplace_front() constructs
a new element at the beginning
of a list.

🌐 Code
*/

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    list<string> names = {"Ravi"};

    // Construct a String at the Beginning
    names.emplace_front("Aman");

    names.emplace_front("Neha");

    cout << "Names : ";
    for (const string& name : names)
        cout << name << " ";

    return 0;
}

/*
▶ Execution Output

Names : Neha Aman Ravi
*/