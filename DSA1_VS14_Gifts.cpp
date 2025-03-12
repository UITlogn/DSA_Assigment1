#include <bits/stdc++.h>                                                                                                                                                                                      //Logm
using namespace std;
#define int long long

const int N = 1e5+5;
int n, k, a[N];

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    cin >> n >> k;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    sort(a + 1, a + n + 1);

    int ans = 0;
    for (int i = 1, j = n; i < j; ++i) {
        while (i < j && a[i] + a[j] > k) --j;
        if (i < j) ans = max(ans, a[i] + a[j]);
    }
    cout << ans;
    return 0;
}