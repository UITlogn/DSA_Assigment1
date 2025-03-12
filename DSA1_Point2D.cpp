#include <bits/stdc++.h>                                                                                                                                                                                      //Logm
using namespace std;
#define int long long
#define II pair<int,int>
#define fi first
#define se second

const int N = 1e6+5;
int n;
II a[N];

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i].fi >> a[i].se;
        a[i].se *= -1;
    }
    sort(a + 1, a + n + 1);

    for (int i = 1; i <= n; ++i)
        cout << a[i].fi << ' ' << -a[i].se << '\n';
    return 0;
}