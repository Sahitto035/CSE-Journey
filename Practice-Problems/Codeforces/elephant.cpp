#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int steps = n / 5;
    if (n % 5 != 0) {
        steps++;
    }
    cout << steps << endl;





    return 0;
}