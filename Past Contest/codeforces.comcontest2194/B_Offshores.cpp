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
    ll n,x,y;
    cin>>n>>x>>y;
    vl a(n);
    ll sum=0;
    F(i,0,n)
    {
        cin>>a[i];
        sum+=(a[i]/x)*y;
    }
    ll maxi=0;
    F(i,0,n)
    {
        ll v=a[i]+sum-(a[i]/x)*y;
        maxi=max(maxi,v);
    }
    cout<<maxi<<nl;
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
