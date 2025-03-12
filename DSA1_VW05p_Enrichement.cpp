#include <bits/stdc++.h>                                                                                                                                                                                      //Logm
using namespace std;
#define int long long

int n, m;
vector<vector<int> > a;

int getsum(int x, int y, int u, int v) {
    return a[u][v] - a[u][y - 1] - a[x - 1][v] + a[x - 1][y - 1];
}
signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    cin >> n >> m;
    a.assign(n + 2, vector<int> (m + 2, 0));

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
            a[i][j] += a[i][j - 1] + a[i - 1][j] - a[i - 1][j - 1];
        }
    
    int ans = 1e18;
    for (int i = 1; i + 2 <= n; ++i) {
        for (int j = 1; j + 2 <= m; ++j)
            ans = min(ans, getsum(i, j, i + 2, j + 2));
    }
    cout << ans;
    return 0;
}