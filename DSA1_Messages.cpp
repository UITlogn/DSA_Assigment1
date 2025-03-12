#include <bits/stdc++.h>                                                                                                                                                                                      //Logm
using namespace std;
#define int long long

string s, t;

bool check(int x) {
    for (int i = 0; x < s.size(); ++x, ++i)
        if (s[x] != t[i])
            return 0;
    return 1;
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    getline(cin, s);
    getline(cin, t);
    for (int i = 0; i < s.size(); ++i) {
        if (check(i)) {
            cout << i + t.size() << '\n';
            cout << s.substr(0, i) << t;
            return 0;
        }
    }
    cout << s.size() + t.size() << '\n';
    cout << s << t;
    return 0;
}