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

    vl p(n+1), a(n);

    F(i,0,n)
    {
        ll x;
        cin >> x;
        p[x] = i;    
    }

    F(i,0,n)
        cin >> a[i];

    ll chk = -1;
    bool flag = true;

    F(i,0,n)
    {
        if(i > 0 && a[i] == a[i-1])
            continue;

        if(p[a[i]] < chk)
        {
            flag = false;
            break;
        }

        chk = p[a[i]];
    }

    if(flag)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
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
