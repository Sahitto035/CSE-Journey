#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x; cin >> n >> x;
    vector<int>vct(n);
    for (auto &i:vct) cin >> i;
    sort(vct.begin(), vct.end())
    vct.resize(unique(vct.begin(), vct.end()) - vct.begin());
    if (vct.size() == x) {
        cout << "Good" << endl;
    }
    else if (vct.size() > x) {
        cout << "Average" << endl;
    }
    else {
        cout << "Bad" << endl;
    }
}