#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define FR(i,e,s) for(ll i = e; i >= s; i--)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;

    ll L = k - 1;
    ll R = n - k;

    ll lo = 0, hi = L + R;

    while (lo < hi) {
        ll total = (lo + hi + 1) / 2;

        bool ok = false;

        if (total == 0) {
            ok = true;
        } else {
            ll lo = max(0LL, total - R);
            ll hi = min(L, total);

            if (lo <= hi) {
                ll x1 = total / 2;
                if (x1 < lo) x1 = lo;
                if (x1 > hi) x1 = hi;

                ll x2 = (total + 1) / 2;
                if (x2 < lo) x2 = lo;
                if (x2 > hi) x2 = hi;

                ll y1 = total - x1;
                ll days1 = total + max(x1, y1) - 1;

                ll y2 = total - x2;
                ll days2 = total + max(x2, y2) - 1;

                ll best = min(days1, days2);
                if (best <= m) ok = true;
            }
        }

        if (ok)
            lo = total;
        else
            hi = total - 1;
    }

    cout << lo + 1 << nl;
}

int main() {
    IOS;
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
