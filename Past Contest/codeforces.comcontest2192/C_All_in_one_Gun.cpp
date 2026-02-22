#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    ll n, h, k;
    cin >> n >> h >> k;

    vl v(n);
    ll sum = 0;
    F(i, 0, n)
    {
        cin >> v[i];
        sum += v[i];
    }

    vl pref(n), suf(n);

    pref[0] = v[0];
    F(i, 1, n)
        pref[i] = min(pref[i - 1], v[i]);

    suf[n - 1] = v[n - 1];
    for (ll i = n - 2; i >= 0; i--)
        suf[i] = max(suf[i + 1], v[i]);

    ll ans = -1;
    ll pre = 0;

    F(i, 0, n)
    {
        pre+= v[i];
        ll best = pre;

        if (i + 1 < n)
        {
            ll extra = suf[i + 1] - pref[i];
            if (extra > 0)
                best += extra;
        }

        ll need = h - best;
        ll cycles = 0;
        if (need > 0)
            cycles = (need + sum - 1) / sum;

        ll time = cycles * (n + k) + (i + 1);
        if (ans == -1 || time < ans)
            ans = time;
    }

    cout << ans << nl;
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