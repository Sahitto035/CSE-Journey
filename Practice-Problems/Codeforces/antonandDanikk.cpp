#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string s;
    cin >> s;

    int antonWins = 0;
    int danikWins = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            antonWins++;
        } else if (s[i] == 'D') {
            danikWins++;
        }
    }
    if (antonWins > danikWins) {
        cout << "Anton\n";
    } else if (danikWins > antonWins) {
        cout << "Danik\n";
    } else {
        cout << "Friendship\n";
    }
    return 0;
}