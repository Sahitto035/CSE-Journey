#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    cout << a << ' ' << b << '\n';

    swap(a, b);

    cout << a << ' ' << b << '\n';

    cout << "Min is: " << min(a, b) << endl;
    cout << "Max is: " << max(a, b) << endl;

    return 0;
}