#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            int weight;
            cin >> weight;
            if (weight == 1) {
                c1++;
            } else {
                c2++;
            }
        }

        int total_weight = (c1 * 1) + (c2 * 2);
        if (total_weight % 2 != 0) {
            cout << "NO" << endl;
        }
        else if ((c2 % 2 != 0) && (c1 == 0)) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }










    return 0;
}