#include <bits/stdc++.h>                                                                                                                                                                                      //logm
using namespace std;
#define int long long

const int N = 2e5+5;
int n, cnt[N];

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    if (fopen("_ab.inp", "r")) {
        freopen("_ab.inp", "r", stdin);
        freopen("_ab.out", "w", stdout);
    }

    cin >> n;
    int mex = 0;
    while (n--) {
        int x; cin >> x;
        ++cnt[x];
        while (cnt[mex]) ++mex;
        cout << mex << ' ';
    }
    return 0;
}