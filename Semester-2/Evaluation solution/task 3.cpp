#include<iostream>

using namespace std;

class Employee{
    private:
        string name;
        int age;
        double salary;

    public:
        Employee(){
            this->age = 0;
            this->salary = 0.0;
        }

        Employee(string name, int age, double salary){
            this->name = name;
            this->age = age;
            this->salary = salary;
        }

        ~Employee(){

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
            cout << "| Employee Information         |" << endl;
            cout << "--------------------------------" << endl;
            cout << "Name   : " << this->name << endl;
            cout << "Age    : " << this->age << endl;
            cout << "Salary : " << this->salary << endl;
            cout << "--------------------------------" << endl;
        }

        // [Binary] Employee + double
        double operator+(double bonus){
            return this->salary + bonus;
        }

        // [Binary] Employee + Employee
        Employee operator+(Employee emp){

            string name = this->name + " " + emp.getName();
            int age = this->age + emp.getAge();
            double salary = this->salary + emp.getSalary();

            Employee teamLeader(name, age, salary);

            return teamLeader;
        }

};

int main(){

    Employee e1("Ashik", 23, 35000.0);
    Employee e2("Rahim", 25, 42000.0);
    double bonus = 5000.0;

    e1.showDetails();
    e2.showDetails();

    cout << "--------------------------------------------" << endl;
    cout << "| Employee + double                        |" << endl;
    cout << "--------------------------------------------" << endl;

    double updatedSalary = e1 + bonus;

    cout << "Updated Salary: " << updatedSalary << endl;

    cout << endl;

    cout << "--------------------------------------------" << endl;
    cout << "| Employee + Employee                      |" << endl;
    cout << "--------------------------------------------" << endl;

    Employee teamLeader = e1 + e2;

    teamLeader.showDetails();

    return 0;
}
