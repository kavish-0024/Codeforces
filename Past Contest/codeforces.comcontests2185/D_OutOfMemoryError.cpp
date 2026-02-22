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
   ll n, m, h, b, c;
   cin >> n >> m >> h;

   vl a(n);
   F(i,0,n)
       cin >> a[i];

   vl inc(n, 0);     
   vl a2(n, -1);
   ll tag = 0;       

   while (m--)
   {
       cin >> b >> c;
       b--;

       if (a2[b] != tag)
       {
           a2[b] = tag;
           inc[b] = 0;
       }

       inc[b] += c;

       if (a[b] + inc[b] > h)
       {
           tag++;
       }
   }

   F(i,0,n)
   {
       ll ans = a[i] + ((a2[i] == tag) ? inc[i] : 0LL);
       cout << ans << " ";
   }
   cout << nl;
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
