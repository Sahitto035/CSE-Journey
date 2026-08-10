#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int q = s.length();
        if (q % 2 != 0) {
            cout << "NO" << endl;
        }
        else {
            int half = q / 2;

            string first_half = s.substr(0, half);
            string second_half = s.substr(half, half);
            if (first_half == second_half) {
                cout << "Yes" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }






    return 0;
}