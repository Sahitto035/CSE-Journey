#include<iostream>
#include<cstring>
using namespace std;

class card {
    char title[80]; // book title
    char author[40]; // author
    int number; // number in library
public:
    void store(char *t, char *name, int num);
    void show();
};

void card::store (char *t, char *name, int num) {
    strcpy(title,t);
    strcpy(author, name);
    number = num;
}
    void card::show() {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Number on hand: " << number << "\n";
    }
int main() {
    card book1, book2, book3;

    book1.store("Dune", "Frank Herbert", 2);
    book2.store("The Foundation Trilogy", "Issac Asimob", 2);
    book3.store("The Rainbow", "D.H. Lawrence", 1);

    book1.show();
    book2.show();
    book3.show();

    return 0;


}