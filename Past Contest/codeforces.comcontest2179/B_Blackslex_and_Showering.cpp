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
   ll n;
   cin>>n;
   vl a(n);
   ll sum=0;
   F(i,0,n)
   {
        cin>>a[i];
   } 
   F(i,1,n)
   {
        sum+=abs(a[i]-a[i-1]);
   }
   ll c1=0,c2=0;
   c1=max(c1,abs(a[1]-a[0]));
   c1=max(c1,abs(a[n-1]-a[n-2]));
   F(i,1,n-1)
   {
        ll l=abs(a[i]-a[i-1]);
        ll m=abs(a[i+1]-a[i-1]);
        ll r=abs(a[i+1]-a[i]);
        c2=l+r-m;
        c1=max(c1,c2);
   }
   cout<<sum-c1<<nl;
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
