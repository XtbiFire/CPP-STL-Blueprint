/*
◆──────────────────────────────────◆
79. Deque Emplace Operations
◆──────────────────────────────────◆

💡 Remember

emplace_front() and emplace_back() construct
an element directly at the selected end of a deque.

push_front() and push_back() insert a value
that already exists.

For simple types like int, emplace is not
automatically faster than push. It is especially
useful for constructing custom objects from arguments.

🌐 Code
*/

#include <iostream>
#include <deque>
#include <string>

using namespace std;

// Custom class
class Student
{
public:
    string name;
    int age;

    // Constructor initializes the student's data
    Student(string studentName, int studentAge)
        : name(studentName), age(studentAge)
    {
    }
};

// Main Function
int main()
{
    deque<Student> students;

    // Construct a Student directly at the front
    students.emplace_front("Aman", 20);

    // Construct a Student directly at the back
    students.emplace_back("Riya", 19);

    // Display students from front to back
    cout << "Students :" << endl;

    for (const Student& student : students)
    {
        cout << student.name
             << " - Age: "
             << student.age << endl;
    }

    return 0;
}

/*
▶ Execution Output

Students :
Aman - Age: 20
Riya - Age: 19

*/