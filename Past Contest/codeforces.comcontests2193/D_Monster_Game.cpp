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
    cin>>n;
    vl a(n),b(n);
    F(i,0,n)
    {
        cin>>a[i];
    }
    F(i,0,n)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    vl pre(n+1,0);
    F(i,0,n)
    {
        pre[i+1]=pre[i]+b[i];
    }
    ll maxi=0;
    F(i,0,n)
    {
        if(i>0 && a[i]==a[i-1])
        continue;

        ll x=a[i];
        ll y=n-i;
        
        auto var1=upper_bound(pre.begin(),pre.end(),y);
        ll var2=distance(pre.begin(),var1)-1;
        
        if(var2>0)
        maxi=max(maxi,x*var2);

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
