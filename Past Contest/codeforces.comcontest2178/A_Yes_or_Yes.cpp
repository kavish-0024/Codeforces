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
    string s;
    cin>>s; 
    ll county=0,countn=0;
    F(i,0,s.size())
    {
        if(s[i]=='Y')
        county++;
        else
        countn++;
    }
    if(county==s.size())
    cout<<"NO"<<nl;
    else if(countn==s.size())
    cout<<"YES"<<nl;
    else
    {
        if(countn==s.size()-1)
        cout<<"YES"<<nl;
        else
        cout<<"NO"<<nl;
    }
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
