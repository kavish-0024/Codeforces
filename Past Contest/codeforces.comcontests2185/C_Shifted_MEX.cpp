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
   sort(a.begin(),a.end());
   a.erase(unique(a.begin(),a.end()),a.end());
   ll ans=1,c=1;
   F(i,0,n)
   {
    if(a[i]-a[i-1]==1)
    {
    c++;
    ans=max(ans,c);
   }
   else
   c=1;
 
}
  cout<<ans<<nl;

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
