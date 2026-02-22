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
   ll s,k,m;
   cin>>s>>k>>m;

   ll x=m/k,y=m%k;
   ll a,b;
   if(x%2==1)
   a=s>k?k:s;
   else
   a=s;

   b=a-y;
   if(b<0)
   b=0;

   cout<<b<<nl;
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
