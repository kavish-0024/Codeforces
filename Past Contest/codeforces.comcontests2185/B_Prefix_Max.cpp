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
   ll n,sum=0,maxi;
   cin>>n;
   vl a(n);
   F(i,0,n)
   {
        cin>>a[i];
        if(i==0)
        maxi=a[i];
        else
        maxi=max(maxi,a[i]);
        
   }
   cout<<maxi*n<<nl;
   

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
