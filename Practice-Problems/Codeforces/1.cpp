#include<bits/stdc++.h>
using namespace std;

void fun(int &n) {
    n += 10;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;
    fun(a);
    cout << a << endl;

}