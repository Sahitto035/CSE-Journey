#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int>vct;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        vct.push_back(tmp);
    }
    int serja = 0, dima = 0;

    for (int i = 0; i < n; i++) {
        //1st element ar last element compare
        if (*vct.begin() > *(vct.end() - 1)) {
            if (i%2 == 0) {
                serja += *vct.begin();
            }
            else {
                dima += *vct.begin();
            }
            vct.erase(vct.begin());
        }
        else // last element
        {
            if ( i % 2 == 0) {
                serja += *(vct.end()-1);
            }
            else dima+= *(vct.end()-1);
            vct.erase((vct.end()-1));
        }


    }
    cout << serja << ' ' << dima << endl;



    return 0;
}
