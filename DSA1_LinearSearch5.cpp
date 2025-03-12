#include <bits/stdc++.h>                                                                                                                                                                                      //logm
using namespace std;
#define int long long

const int N = 2e5+5;
int n, a[N];

void solve() {
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);
    if (n < 4) cout << a[n] - a[1] << '\n';
    else cout << a[n] - a[1] + a[n - 1] - a[2] << '\n';
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}