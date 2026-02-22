#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define FR(i,e,s) for(ll i = e; i >= s; i--)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() 
{
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    F(i,0,n) cin >> a[i];

    vector<pair<ll,ll>> v;
    F(i,0,n) v.push_back({a[i], i+1});

    sort(v.begin(), v.end());

    vector<pair<ll,ll>> ans;

    /* ---------- m = 0 ---------- */
    if (m == 0)
    {
        cout << -1 << nl;
        return;
    }

    /* ---------- m > 1 ---------- */
    if (m > 1)
    {
        if (n < 2*m)
        {
            cout << -1 << nl;
            return;
        }

        // largest m survive, smallest m die
        F(i,0,m)
        {
            ll attacker = v[n-1-i].second;
            ll victim   = v[i].second;
            ans.push_back({attacker, victim});
        }

        cout << ans.size() << nl;
        for (auto &p : ans)
            cout << p.first << " " << p.second << nl;
        return;
    }

    /* ---------- m = 1 ---------- */
    ll boss = v[n-1].second;

    // everyone else attacks boss and dies by recoil
    F(i,0,n-1)
    {
        ans.push_back({v[i].second, boss});
    }

    cout << ans.size() << nl;
    for (auto &p : ans)
        cout << p.first << " " << p.second << nl;
}

int main() 
{
    IOS;
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
