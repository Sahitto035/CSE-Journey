#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 1 && y == 1 && z == 1) {
            count ++;
        }
        else if (x == 1 && y == 1 && z == 0) {
            count++;
        }
        else if (x == 1 && y == 0 && z == 1) {
            count++;
        }
        else if (x == 0 && y == 1 && z == 1) {
            count++;
        }
        else {
            count;
        }


    }

    cout << count << endl;









    return 0;
}