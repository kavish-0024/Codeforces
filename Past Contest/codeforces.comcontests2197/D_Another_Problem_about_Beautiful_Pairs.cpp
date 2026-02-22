#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    ll n;
    cin >> n;

    vl a(n);
    F(i,0,n)
        cin >> a[i];

    ll count = 0;

    for(ll i = 0; i < n; i++)
    {
        for(ll k = a[i]; i + k < n;k ++)
        {
            ll j = i + k;

            if(a[i] * a[j] == k)
                count++;
        }
    }

    cout << count << nl;
}

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
        solve();
}
