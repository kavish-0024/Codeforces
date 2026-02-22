#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;

#define F(i, s, e) for (ll i = s; i < e; i++)
#define FR(i, e, s) for (ll i = e; i >= s; i--)
#define nl '\n'
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> mp;
    vl a(n), b(n);
    F(i, 0, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    F(i, 0, n)
    {
        cin >> b[i];
        mp[b[i]]++;
    }
    for (auto it : mp)
    {
        if (it.second % 2 == 1)
        {
            cout << -1 << nl;
            return;
        }
    }
    
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
