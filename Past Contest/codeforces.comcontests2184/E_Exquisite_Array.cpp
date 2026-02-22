#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define FR(i,e,s) for(ll i = e; i >= s; i--)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin >> n;
    vl a(n);
    F(i,0,n) cin >> a[i];

    F(k,1,n)
    {
        ll ans = 0;
        ll l = 1;  

        F(i,0,n-1)
        {
            if (abs(a[i] - a[i+1]) >= k) {
                l++;
            } else {
                if (l >= 2)
                    ans += (l - 1) * l / 2;
                l = 1;
            }
        }

        if (l >= 2)
            ans += (l - 1) * l / 2;

        cout << ans << " ";
    }
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
