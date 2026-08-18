#include<bits/stdc++.h>
using namespace std;
class Member {
protected:
    string memberName, phoneNo;
public:
    Member(string name, string phoneNo) {
        this->memberName = name;
        this->phoneNo = phoneNo;
    }
    void showMemberInfo() {
        cout << "Member Name: " << memberName << endl;
        cout << "Phone No: " << phoneNo << endl;
    }
};
class Book {
protected:
    string bookTitle, bookID;
public:
    Book(string bookTitle, string bookID) {
        this->bookTitle = bookTitle;
        this->bookID = bookID;
    }
    void showBookInfo() {
        cout << "Book Title: " << bookTitle << endl;
        cout << "Book Id: " << bookID << endl;
    }
};
class Library {
protected:
    string libraryName;
    string location;
public:
    Library(string libraryName, string location) {
        this->libraryName = libraryName;
        this->location = location;
    }
    void showLibraryInfo() {
        cout << "Library Name: " << libraryName << endl;
        cout << "Location: " << location << endl;
    }
};
class IssueInfo: public Member, public Book, public Library {
private:
    int issueDays;
    string issueDate;
public:
    IssueInfo(string name, string phoneNo, string bookTitle, string bookID, string libraryName, string location, int issueDays, string issueDate) :
        Member(name, phoneNo), Book(bookTitle, bookID), Library(libraryName, location) {
        this-> issueDays = issueDays;
        this-> issueDate = issueDate;
    }
    void showIssueInfo() {
        showMemberInfo();
        showBookInfo();
        showLibraryInfo();
        cout << "Issue Days: " << this->issueDays << endl;
        cout << "Issue Date: " << this->issueDate << endl;
    }

};
int main() {
    IssueInfo issue1("ABC", "0123456", "Chemistry", "1005",
            "Boi Ghor", "BUBT", 7, "15-12-2025");


    issue1.showIssueInfo();

    return 0;
}
