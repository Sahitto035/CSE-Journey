#include<iostream>

using namespace std;

class Student{
    private:
        string name;
        int studentID;

    public:
        Student(){
            this->studentID = 0;
        }

        Student(string name, int studentID){
            this->name = name;
            this->studentID = studentID;
        }

        ~Student(){

        }

        string getName(){
            return this->name;
        }

        void setName(string name){
            this->name = name;
        }

        int getStudentID(){
            return this->studentID;
        }

        void setStudentID(int studentID){
            this->studentID = studentID;
        }

        void showDetails(){
            cout << "------------------------------" << endl;
            cout << "| Student Information        |" << endl;
            cout << "------------------------------" << endl;
            cout << "Name : " << this->name << endl;
            cout << "ID   : " << this->studentID << endl;
            cout << "------------------------------" << endl;
        }

        // Binary Operator Overloading
        string operator+(string lastName){
            this->name += (" " + lastName);
            return this->name;
        }

};

int main(){

    Student s1("Ashik", 2210426);

    cout << "Before Adding Last Name:" << endl;
    s1.showDetails();

    cout << "Updated Name: " << s1 + "Rahman" << endl;

    cout << endl;

    cout << "After Adding Last Name:" << endl;
    s1.showDetails();

    return 0;
}
