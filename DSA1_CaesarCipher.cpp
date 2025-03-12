#include <bits/stdc++.h>                                                                                                                                                                                      //Logm
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    int k;
    string s;
    cin >> k;
    getline(cin, s);
    getline(cin, s);
    for (int i = 0; i < s.size(); ++i) {
        if ('A' > s[i] || s[i] > 'Z')
            cout << s[i];
        else
            cout << char((s[i]-'A' + k) % 26 + 'A');
    }

    return 0;
}