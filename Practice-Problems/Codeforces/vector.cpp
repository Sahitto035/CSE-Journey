#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector <int> vct;
    for (int i = 0; i < n; i ++) {
        int tmp;
        cin >> tmp;
        vct.push_back(tmp);
    }

    cout << max_element(vct.begin(), vct.end()) - vct.begin() << endl;

    auto it = max_element(vct.begin(), vct.end());
    auto it2 = min_element(vct.begin(), vct.end());

    int mx = *max_element(vct.begin(), vct.end());
    int mn = *min_element(vct.begin(), vct.end());

    int idx_max = max_element(vct.begin(), vct.end()) - vct.begin();
    int idx_min = min_element(vct.begin(), vct.end()) - vct.begin();









    return 0;
}