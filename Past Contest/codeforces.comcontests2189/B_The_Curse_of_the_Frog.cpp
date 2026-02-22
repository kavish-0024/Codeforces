#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define FR(i,e,s) for(ll i = e; i >= s; i--)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() 
{
    ll n, x;
    cin >> n >> x;

    vl a(n), b(n), c(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];

    ll use = 0;
    ll ans = LLONG_MIN;

    for (ll i = 0; i < n; i++)
    {
        use += (b[i] - 1) * a[i];
        ll jump = a[i] * b[i] - c[i];
        ans = max(ans, jump);
    }

    if (use >= x)
        cout << 0 << nl;
    else if (ans <= 0)
        cout << -1 << nl;
    else
    {
        ll d = x - use;
        ll nans = (d + ans - 1) / ans;
        cout << nans << nl;
    }
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
