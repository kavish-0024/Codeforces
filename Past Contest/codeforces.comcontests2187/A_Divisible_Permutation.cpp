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
    bool flag=false;
    ll l=1,r=n;
    FR(i,n-1,0)
    {
        if(flag)
        {
            a[i]=r--;
        }
        else
        {
            a[i]=l++;
        }
        flag=!flag;
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
