#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int tc = 0; tc < t; tc++) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool is_valid = true;

        for (int i = 0; i < n; i++) {
            if (i > 0 && s[i] != s[i - 1]) {
                for (int j = 0; j < i; j++) {
                    if (s[i] == s[j]) {
                        is_valid = false;
                        break;
                    }
                }
            }
            if (!is_valid) {
                break;
            }
        }
        if (is_valid) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}