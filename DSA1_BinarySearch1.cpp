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
    int t;
    cin >> t;
    int l = 0, r = n - 1, cnt = 0;
    while (l <= r) {
        int m = l + r >> 1;
        ++cnt;
        if (a[m] < t) {
            l = m + 1;
        } else if (a[m] > t) {
            r = m - 1;
        } else {
            cout << m << '\n' << cnt;
            return 0;
        }
    }
    cout << -1;
    return 0;
}