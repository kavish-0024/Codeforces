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
   vl p(n+1);
   p[1]=(n%2==0?n:n-1);
   p[n]=1;
   cout<<p[1]<<" ";
   F(i,2,n)
   {
    p[i]=i^1;
    cout<<p[i]<<" ";
   }
   cout<<p[n]<<nl;
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
