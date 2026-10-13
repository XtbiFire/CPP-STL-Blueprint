/*
◆───────────────────────────────◆
70. Mini Project
◆───────────────────────────────◆

💡 Remember

A list can manage a simple
to-do list by adding tasks,
removing completed tasks,
and displaying remaining tasks.

🌐 Code
*/

#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{
    // Create a To-Do List
    list<string> tasks = {
        "Study C++",
        "Practice STL",
        "Revise Notes"
    };

    // Add a New Task at the End
    tasks.push_back("Solve Problems");

    // Remove the First Completed Task
    tasks.pop_front();

    // Display Remaining Tasks
    cout << "Remaining Tasks :" << endl;

    for (const string& task : tasks)
        cout << "- " << task << endl;

    return 0;
}

/*
▶ Execution Output

Remaining Tasks :
- Practice STL
- Revise Notes
- Solve Problems
*/