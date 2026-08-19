#include<iostream>

using namespace std;

class Customer{
    private:
        string name;
        int age;
        double balance;

    public:
        Customer(){
            this->age = 0;
            this->balance = 0.0;
        }

        Customer(string name, int age, double balance){
            this->name = name;
            this->age = age;
            this->balance = balance;
        }

        ~Customer(){

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

        double getBalance(){
            return this->balance;
        }

        void setBalance(double balance){
            this->balance = balance;
        }

        void showDetails(){
            cout << "--------------------------------" << endl;
            cout << "| Customer Information         |" << endl;
            cout << "--------------------------------" << endl;
            cout << "Name    : " << this->name << endl;
            cout << "Age     : " << this->age << endl;
            cout << "Balance : " << this->balance << endl;
            cout << "--------------------------------" << endl;
        }

        // [Binary] Customer + double
        friend double operator+(Customer near, double far){
            return near.balance + far;
        }

        // [Binary] double + Customer
        friend double operator+(double near, Customer far){
            return near + far.balance;
        }

        // [Binary] Customer + Customer
        friend Customer operator+(Customer near, Customer far){

            string name = near.name + " " + far.name;
            int age = near.age + far.age;
            double balance = near.balance + far.balance;

            Customer premiumCustomer(name, age, balance);

            return premiumCustomer;
        }

        // [Unary] Prefix ++
        friend Customer operator++(Customer &near){

            near.age++;
            near.balance += 5000;

            return near;
        }

        // [Unary] Postfix ++
        friend Customer operator++(Customer &near, int dummy){

            Customer oldCopy = near;

            near.age++;
            near.balance += 5000;

            return oldCopy;
        }

};

int main(){

    Customer c1("Ashik", 23, 25000.0);
    Customer c2("Rahim", 25, 35000.0);
    double deposit = 5000.0;

    c1.showDetails();
    c2.showDetails();

    cout << "-----------------------------------------------------" << endl;
    cout << "| Operator Overloading with Friend Function         |" << endl;
    cout << "-----------------------------------------------------" << endl;

    cout << "------------------------------------------------" << endl;
    cout << "| [Binary] Customer + double                  |" << endl;
    cout << "------------------------------------------------" << endl;

    double updatedBalance = c1 + deposit;
    cout << "Updated Balance: " << updatedBalance << endl;

    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "| [Binary] double + Customer                  |" << endl;
    cout << "------------------------------------------------" << endl;

    updatedBalance = deposit + c1;
    cout << "Updated Balance: " << updatedBalance << endl;

    cout << endl;

    cout << "------------------------------------------------" << endl;
    cout << "| [Binary] Customer + Customer                |" << endl;
    cout << "------------------------------------------------" << endl;

    Customer premiumCustomer = c1 + c2;
    premiumCustomer.showDetails();

    cout << "------------------------------------------------" << endl;
    cout << "| [Unary] Prefix ++                           |" << endl;
    cout << "------------------------------------------------" << endl;

    Customer cloneCustomer = ++c2;

    c2.showDetails();
    cloneCustomer.showDetails();

    cout << "------------------------------------------------" << endl;
    cout << "| [Unary] Postfix ++                          |" << endl;
    cout << "------------------------------------------------" << endl;

    Customer oldCustomer = c2++;

    c2.showDetails();
    oldCustomer.showDetails();

    return 0;
}
