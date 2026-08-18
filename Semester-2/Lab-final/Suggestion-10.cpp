#include<bits/stdc++.h>
using namespace std;

class Student {
protected:
    string studentName, studentID;
public:
    Student(string studentName, string studentID) {
        this->studentName = studentName;
        this->studentID = studentID;
    }
    void show() {
        cout << "Name: " << this->studentName << endl;
        cout << "ID: " << this->studentID << endl;
    }
};
class Course : public Student {
protected:
    string courseName, semester;
public:
    Course(string studentName, string studentID, string courseName, string semester):
    Student(studentName, studentID) {
        this->courseName = courseName;
        this->semester = semester;
    }
    void show() {
        Student::show();
        cout << "Course Name: " << this->courseName << endl;
        cout << "Semester: " << this->semester << endl;
    }
};
class Result : public Course {
private:
    double marks;
    string finalGrade;
public:
    Result(string studentName, string studentID, string courseName, string semester, double marks):
    Course(studentName, studentID, courseName, semester) {
        this->marks = marks;
    }
    string getFinalGrade() {
        if (this->marks > 79) {
            finalGrade = "A+";
        }
        else if (this->marks >69) {
            finalGrade = "A";
        }
        else if (this->marks > 59) {
            finalGrade = "B";
        }
        else if (this->marks > 49) {
            finalGrade = "C";
        }
        else {
            finalGrade = "F";
        }
        return finalGrade;
    }
    void show() {
        Course::show();
        cout << "Marks: " << this->marks << endl;
        cout << "Final Grade: " << getFinalGrade() << endl;
    }
};
int main() {
    Result std1("Rahim", "1001", "CSE", "Summer", 75);
    std1.show();
}