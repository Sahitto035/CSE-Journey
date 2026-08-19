#include<iostream>

using namespace std;

class Faculty{
    private:
        string name;
        int age;
        double salary;

    public:
        Faculty(){
            this->age = 0;
            this->salary = 0.0;
        }

        Faculty(string name, int age, double salary){
            this->name = name;
            this->age = age;
            this->salary = salary;
        }

        ~Faculty(){

        }

        string getName(){
            return this->name;
        }

        void setName(string name){
            this->name = name;
        }

        int getAge(){
            return this->age;
        }

        void setAge(int age){
            this->age = age;
        }

        double getSalary(){
            return this->salary;
        }

        void setSalary(double salary){
            this->salary = salary;
        }

        void showDetails(){
            cout << "--------------------------------" << endl;
            cout << "| Faculty Information          |" << endl;
            cout << "--------------------------------" << endl;
            cout << "Name   : " << this->name << endl;
            cout << "Age    : " << this->age << endl;
            cout << "Salary : " << this->salary << endl;
            cout << "--------------------------------" << endl;
        }

        // [Binary] Case-1: FacultyObj + Other(double)
        double operator+(double bonus){
            return this->salary + bonus;
        }

        // [Binary] Case-2: Other(double) + FacultyObj
        // Compile-time Error

        // [Binary] Case-3: FacultyObj + FacultyObj
        Faculty operator+(Faculty other){

            string name = this->name + " " + other.getName();
            int age = this->age + other.getAge();
            double salary = this->salary + other.getSalary();

            Faculty seniorFaculty(name, age, salary);

            return seniorFaculty;
        }

        // [Unary] Case-4: ++FacultyObj
        Faculty operator++(){

            this->age++;
            this->salary += 10000;

            return *this;
        }

        // [Unary] Case-5: FacultyObj++
        Faculty operator++(int dummy){

            Faculty oldCopy = *this;

            this->age++;
            this->salary += 10000;

            return oldCopy;
        }

};

int main(){

    Faculty f1("Dr. Karim", 40, 70000.0);
    Faculty f2("Dr. Hasan", 45, 85000.0);
    double bonus = 5000.0;

    f1.showDetails();
    f2.showDetails();

    cout << "-----------------------------------------------------" << endl;
    cout << "| Operator Overloading with Native Function         |" << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "------------------------------------------------" << endl;
    cout << "| [Binary] Case-1: FacultyObj + Other(double) |" << endl;
    cout << "------------------------------------------------" << endl;

    double updatedSalary = f1 + bonus;

    cout << "Updated Salary: " << updatedSalary << endl;

    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "| [Binary] Case-2: Other(double) + FacultyObj |" << endl;
    cout << "------------------------------------------------" << endl;

    cout << "It will generate compile-time error." << endl;

    // Uncommenting the following line will generate an error.
    // updatedSalary = bonus + f1;

    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "| [Binary] Case-3: FacultyObj + FacultyObj    |" << endl;
    cout << "------------------------------------------------" << endl;

    Faculty seniorFaculty = f1 + f2;

    seniorFaculty.showDetails();

    cout << "------------------------------------------------" << endl;
    cout << "| [Unary] Case-4: ++FacultyObj                |" << endl;
    cout << "------------------------------------------------" << endl;

    Faculty cloneFaculty = ++f2;

    f2.showDetails();
    cloneFaculty.showDetails();

    cout << "------------------------------------------------" << endl;
    cout << "| [Unary] Case-5: FacultyObj++                |" << endl;
    cout << "------------------------------------------------" << endl;

    Faculty oldFaculty = f2++;

    f2.showDetails();
    oldFaculty.showDetails();

    return 0;
}
