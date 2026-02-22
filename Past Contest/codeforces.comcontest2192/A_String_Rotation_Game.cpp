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
    string s;
    cin >> n >> s;
    ll count = 1, sum = 0, maxi = 0;
    F(i, 0, n - 1)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            if (count != 0)
            {
                sum++;
                maxi = max(maxi, count);
            }
            count = 1;
        }
    }
    if (count != 0)
    {
        sum++;
        maxi = max(maxi, count);
    }
    if (maxi != n && maxi!=1 && s[0]!=s[n-1])
        sum++;
    cout << sum << nl;
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
