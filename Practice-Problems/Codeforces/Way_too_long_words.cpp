#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    // Optimize input/output operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;

        int len = a.length();

        if (len > 10) {
            cout << a[0] << len - 2 << a[len-1] << endl;
        }
        else {
            cout << a << endl;
        }


    }

    return 0;
}