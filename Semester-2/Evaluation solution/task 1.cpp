#include<iostream>

using namespace std;

class Dog{
    private:
        string name;
        int age;

    public:
        Dog(){
            this->age = 0;
        }

        Dog(string name, int age){
            this->name = name;
            this->age = age;
        }

        ~Dog(){

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

        void showDetails(){
            cout << "-----------------------------" << endl;
            cout << "| Dog Information           |" << endl;
            cout << "-----------------------------" << endl;
            cout << "Name : " << this->name << endl;
            cout << "Age  : " << this->age << endl;
            cout << "-----------------------------" << endl;
        }

        // Binary Operator Overloading
        int operator+(Dog d){
            return this->age + d.getAge();
        }

};

int main(){

    Dog d1("Bruno", 4);
    Dog d2("Rocky", 3);

    d1.showDetails();
    d2.showDetails();

    cout << "-----------------------------" << endl;
    cout << "Total Age: " << d1 + d2 << endl;
    cout << "-----------------------------" << endl;

    return 0;
}
