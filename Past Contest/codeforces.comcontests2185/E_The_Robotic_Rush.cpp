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
    ll n, m, k;
    cin >> n >> m >> k;

    vl a(n), b(m);
    F(i, 0, n) cin >> a[i];
    F(i, 0, m) cin >> b[i];

    sort(b.begin(), b.end());

    string s;
    cin >> s;

    vector<ll> left(k + 2, 0), right(k + 2, 0);  
    ll c = 0, maxi = 0, mini = 0;

    F(i, 1, k + 1)
    {
        c += (s[i - 1] == 'R') ? 1 : -1;

        if (c > maxi)
        {
            maxi = c;
            left[maxi] = i;
        }
        if (c < mini)
        {
            mini = c;
            right[-mini] = i;
        }
    }

    vector<ll> ans(k + 2, 0);

    F(i, 0, n)
    {
        ll x = a[i];
        ll minii = k + 1;  

        auto it = lower_bound(b.begin(), b.end(), x);

        if (it != b.end())
        {
            ll d = *it - x;
            if (d > 0 && d <= maxi)
                minii = min(minii, left[d]);
        }
        if (it != b.begin())
        {
            auto kt = prev(it);
            ll d = x - *kt;
            if (d > 0 && d <= -mini)
                minii = min(minii, right[d]);
        }

        if (minii <= k)
            ans[minii]++;
    }

    ll d = 0;
    F(i, 1, k + 1)
    {
        d += ans[i];
        cout << (n - d) << " ";
    }
    cout << endl;
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
