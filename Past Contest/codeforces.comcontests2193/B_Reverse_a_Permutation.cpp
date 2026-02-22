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
    vl a(n);
    F(i,0,n)
    {
        cin>>a[i];
    }  
    ll l=-1,r=-1,needed=-1; 
    F(i,0,n)
    {
        if(a[i]!=n-i && l==-1)
        {
            l=i;
            needed=n-i;
        }
        if(a[i]==needed)
        {
            r=i;
            break;
        }
    }
    if(r!=-1)
    {
        reverse(a.begin()+l,a.begin()+r+1);
        
    }
    F(i,0,n)
        cout<<a[i]<<" ";
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
