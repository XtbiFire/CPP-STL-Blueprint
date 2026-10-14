/*
◆──────────────────────────────────◆
86. Deque with Custom Objects and Pairs
◆──────────────────────────────────◆

💡 Remember

A deque can store more than simple data types like int.

1. Custom Objects:
   Store objects created from your own classes.

2. Pairs:
   Store two related values together using pair<T1, T2>.

3. Accessing Pair Values:
   first stores the first value.
   second stores the second value.

Use const references while reading objects
to avoid unnecessary copies.

🌐 Code
*/

#include <iostream>
#include <deque>
#include <string>
#include <utility>

using namespace std;

// Custom class representing a student
class Student
{
public:
    string name;
    int age;

    // Constructor initializes student details
    Student(string studentName, int studentAge)
        : name(studentName), age(studentAge)
    {
    }
};

// Main Function
int main()
{
    // Create a deque of Student objects
    deque<Student> students;

    // Construct students directly inside the deque
    students.emplace_back("Aman", 20);
    students.emplace_back("Riya", 19);
    students.emplace_front("Karan", 21);

    cout << "Students :" << endl;

    // Read each student without copying the object
    for (const Student& student : students)
    {
        cout << student.name
             << " - Age: "
             << student.age << endl;
    }


    // Create a deque of integer pairs
    deque<pair<int, int>> coordinates = {
        {2, 3},
        {4, 5},
        {6, 7}
    };

    cout << "Coordinates :" << endl;

    // Access the two values using first and second
    for (const auto& point : coordinates)
    {
        cout << "("
             << point.first << ", "
             << point.second << ")"
             << endl;
    }

    return 0;
}

/*
▶ Execution Output

Students :
Karan - Age: 21
Aman - Age: 20
Riya - Age: 19
Coordinates :
(2, 3)
(4, 5)
(6, 7)

*/