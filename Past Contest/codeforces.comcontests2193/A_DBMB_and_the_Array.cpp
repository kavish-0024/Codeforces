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
    ll n,s,x,sum=0;
    cin>>n>>s>>x;
    vl a(n);
    F(i,0,n)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum>s)
    {
        cout<<"NO"<<nl;
        return;
    }
    else if(sum==s)
    {
        cout<<"YES"<<nl;
        return;
    }
    else 
    {
        if(abs(s-sum)%x==0)
        cout<<"YES"<<nl;
        else
        cout<<"NO"<<nl;
    }

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
