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
    int n;
    cin >> n;
    vector<ll> a(n), suff(n + 1, 0);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = n - 1; i >= 0; i--)
        suff[i] = suff[i + 1] + a[i];

    ll prefix = 0;
    ll ans = LLONG_MIN;

    for (int k = 0; k < n; k++)
    {
        ans = max(ans, prefix - suff[k + 1]);
        if (k == 0)
            prefix += a[0];        
        else
            prefix += llabs(a[k]);
    }

    cout << ans << '\n';
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
