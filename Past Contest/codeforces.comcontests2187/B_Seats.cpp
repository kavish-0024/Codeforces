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
    string s;
    cin>>n>>s;
    ll count=0,f=-1,l=-1;
    F(i,0,n)
    {
        if(s[i]=='1')
        {
            count++;
            if(f==-1)
            f=i;
            l=i;
        }
    }
    if(count==0)
    {
        cout<<(n+2)/3<<nl;
        return;
    }
    ll ans=0;
    ans+=(f+1)/3;
    ans+=(n-l)/3;

    ll x=f;
    F(i,f+1,n)
    {
        if(s[i]=='1')
        {
            ans+=(i-x-1)/3;
            x=i;
        }
    }
    cout<<ans+count<<nl;

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
