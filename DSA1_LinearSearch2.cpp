#include <bits/stdc++.h>                                                                                                                                                                                      //logm
using namespace std;
#define int long long

const int N = 1e5+5;
int n, a[N];
vector<int> ans;

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    int t; cin >> t;

    for (int i = 0; i < n; ++i)
        if (a[i] == t)
            ans.push_back(i);
            
    if (ans.empty()) return cout << 0, 0;
    
    cout << ans.size() << '\n';
    for (int i: ans) cout << i << ' ' << i + 1 << '\n';
    return 0;
}