#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int scores[50];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    int targetScores = scores[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= targetScores && scores[i] > 0) {
            count++;
        }
    }
    cout << count << endl;



    return 0;
}