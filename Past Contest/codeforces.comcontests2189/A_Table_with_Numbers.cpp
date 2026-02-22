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
    ll n, h, l;
    cin >> n >> h >> l;
    vl a(n);
    F(i, 0, n)
    cin >> a[i];
    sort(a.begin(), a.end());
    ll cl = 0, ch = 0;
    FR(i, n - 1, 0)
    {
        if(a[i]<=h && a[i]<=l)
            {
                cl>ch?ch++:cl++;
            }
        else if (a[i] <=h && a[i]>=l)
            ch++;
        else if (a[i] >= h && a[i] <= l)
            cl++;
    }
    cout<<min(ch,cl)<<nl;
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
