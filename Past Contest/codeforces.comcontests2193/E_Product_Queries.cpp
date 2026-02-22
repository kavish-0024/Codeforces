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
    ll n;
    cin >> n;

    vl a(n + 1, 0), dp(n + 1, -1);

    F(i,0,n)
    {
        ll x;
        cin >> x;
        a[x]++;
    }

    F(x,1,n+1)
    {
        if (a[x] > 0)
            dp[x] = 1;
    }

    F(x,2,n+1)
    {
        if (a[x] == 0)
        continue;

        for (ll i = x * 2; i <= n; i += x)
        {
            if (dp[i / x] == -1)
            continue;
            if (dp[i] == -1)
                dp[i] = dp[i / x] + 1;
            else
                dp[i] = min(dp[i], dp[i / x] + 1);
        }
    }
    F(i,1,n+1)
        cout << dp[i] << " ";
    cout << nl;
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