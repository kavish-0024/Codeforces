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
    string s;
    cin >> s;
    ll n = s.size();

    ll x = (s[0] == 'u');
    ll y = (ll)1e9;     

    F(i,1,n)
    {
        ll countu, counts;

        ll sum = (s[i] == 'u');
        countu = min(x, y) + sum;

        if (s[i] == 's')
            counts = (ll)1e18;
        else
            counts = x;
        x = countu;
        y = counts;
    }

    cout << x << nl;
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
