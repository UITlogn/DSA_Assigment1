#include <bits/stdc++.h>                                                                                                                                                                                      //logm
using namespace std;
#define int long long

const int N = 1e5+5;
int n, a[N];

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    int t; cin >> t;

    int pos = -1;
    for (int i = 0; i < n; ++i)
        if (a[i] == t) {
            pos = i;
            break;
        }
    if (pos == -1) return cout << -1, 0;
    cout << pos << '\n' << pos + 1 << '\n';
    for (int i = n - 1; i >= 0; --i)
        if (a[i] == t) {
            pos = n - i - 1;
            break;
        }
    cout << pos << '\n' << pos + 1;
    return 0;
}