#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int horseShoes[4] = {a, b, c, d};

    sort(horseShoes, horseShoes + 4);
    int count = 0;

    for (int i = 0; i < 3; i++) {
        if (horseShoes[i] ==  horseShoes[i + 1]) {
            count ++;
        }
    }

    cout << count << endl;


    return 0;
}