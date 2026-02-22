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
    ll p,q;
    cin>>p>>q;
    if(p*3==q*2)
    {
        cout<<"Bob"<<nl;
        return;
    }
    ll d=q-p;
    if(d>0 && p*3>=2*q)
    cout<<"Bob"<<nl;
    else
    cout<<"Alice"<<nl;
    
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
