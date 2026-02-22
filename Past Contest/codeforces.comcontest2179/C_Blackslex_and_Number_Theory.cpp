#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define FR(i,e,s) for(ll i = e; i >= s; i--)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;
    vl a(n);
    F(i, 0, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll mn = a[0];
    ll ans = mn;
    ll lim = LLONG_MAX;
    F(i, 1, n) {
        ll x = a[i];
        ll h = (x + 1) / 2;
        ll d = x - mn;
        ll need = max(h, d);
        lim = min(lim, need);
    }
    ll cand = min(lim, a[1]);
    ans = max(ans, cand);

    cout << ans << nl;
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
