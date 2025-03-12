#include <bits/stdc++.h>                                                                                                                                                                                      //Logm
using namespace std;
#define int long long

void reverse(string &s, int l, int r) {
    for (; l < r; ++l, --r) {
        swap(s[l], s[r]);
    }
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }
    
    string s; getline(cin, s);
    int n = s.size();
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            reverse(s, 0, i - 1);
        }
    }
    cout << s;
    return 0;
}