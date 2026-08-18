#include<bits/stdc++.h>
using namespace std;
bool doesNotContain(string whereToCheck, string whatToCheck) {
    return whereToCheck.find(whatToCheck) == string::npos;
}
int main() {
    string email, password;

    bool validEmail = true;
    bool validPass = true;
    do {
        cout << "Enter your email: ";
        cin >> email;
        cout << "Enter your password: ";
        cin >> password;
        string errorMsg = "";
        vaildEmail = true;
        validPass = true;
        for (int i = 0; i < email.length(); i++) {
            try {
                if ((email[i] >= ' ' && email[i] <= '-') || (email[i] >= '[' && email[i] <= '`') || (email[i] >= ':' && email[i] <= '?') || (email[i] >= '{' && email[i] <= '}' )
                    || email[i] == '/') {
                    throw 1;
                }
            }
            catch (int x) {
                errorMsg += "Email cannot contain space or special characters. \n";
                validEmail = false;
            }
            try {
                if (email[i] >= 'A' && email[i] <= 'Z') {
                    throw1;
                    break;
                }
            }
            catch (int x) {
                errorMsg += "Email cannot contain capital alphabets. \n";
                validEmail = false;
            }
        }
        try {
            if (doesNotContain(email, "@gmail.com") && doesNotContain(email, "@yahoo.com") && doesNotContain(email, "@hotmail.com")) {
                throw 1;
            }
        }
        Catch (int x) {
            errorMsgg += "Email must contain a domain.\n";
            validEmail = false;
        }
        try {
            if (password[0] == ' ' || password[password.length() - 1] == ' ') {
                throw 1;
            }
        }
        catch (int x) {
            errorMsg += "Password cannot start or end with a space.\n";
            validEmail = false;
        }
        bool hasSpecial = false;
        try {
            for (int i = 0; i < password.length(); i++) {
                if (!isalpha(password[i]) && !isdigit(password[i])) {
                    hasSpecial = true;
                    break;
                }
            }
            if (hasspecial == false) {
                throw 1;
            }
        }
    }


    return 0;
}