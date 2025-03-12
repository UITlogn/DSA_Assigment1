#include <bits/stdc++.h>                                                                                                                                                                                      //Logm
using namespace std;
#define int long long
#define II pair<int,int>
#define fi first
#define se second

const int N = 1e5+5;
int n, k, a[N];

map<int, int> cnt;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        ++cnt[a[i]];
    }

    k = n - k;
    for (II x: cnt) {
        if (x.se - 1 <= k) {
            k -= x.se - 1;
            cnt[x.fi] = 1;
        } else {
            cnt[x.fi] -= k;
            k = 0;
        }
    }

    for (II x: cnt) {
        if (k > 0) {
            --k;
            continue;
        }
        while (x.se--) cout << x.fi << ' ';
    }

    return 0;
}