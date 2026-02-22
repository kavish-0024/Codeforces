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
    ll n,q;
    cin>>n>>q;
    vl a(n),b(n);
    F(i,0,n)
    {
        cin>>a[i];
    }
    F(i,0,n)
    {
        cin>>b[i];
    }
    if(a[n-1]<b[n-1])
        a[n-1]=b[n-1];
    FR(i,n-2,0)
    {
        a[i]=max({a[i],a[i+1],b[i]});
    }
    vl pre(n);
    pre[0]=a[0];
    F(i,1,n)
    pre[i]=pre[i-1]+a[i];
    ll l,r,sum;
    while(q--)
    {
        cin>>l>>r;
        l--;
        r--;
        if (l == 0)
        sum = pre[r];
        else
        sum = pre[r] - pre[l - 1];
        cout<<sum<<" ";
    }
    cout<<nl;


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
