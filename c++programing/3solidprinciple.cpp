#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string n, int m) {
        name = n;
        marks = m;
    }
};

class Report {
public:
    void printReport(Student s) {
        cout << "Student Details:" << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
    }
};

int main() {
    Student s("Khushi", 3535);

    Report r;
    r.printReport(s);

    return 0;
}