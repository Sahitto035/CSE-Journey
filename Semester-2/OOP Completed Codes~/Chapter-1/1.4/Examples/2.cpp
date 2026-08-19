#include<iostream>
using namespace std;
int main() {
    int num; // THis is  c++ single-line comment
    
    // read the number
    cout << "Enter number to be tested: ";
    cin >> num;
    
    // see if even or odd
    if ((num % 2) == 0) cout << "Number is even\n";
    else cout << "Number is odd\n";
    return 0;
}
/*This is a multiline comment
 *inside of which // is nested a single line comment.
 *Here is the end of the multiline comment
 */