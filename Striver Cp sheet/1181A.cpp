#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
#define vl vector<ll>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    ll x,y,z;
    cin>>x>>y>>z;
    cout<<(x+y)/z<<" ";
    ll e1=x%z,e2=y%z;
    if((e1+e2)/z>0)
    cout<<min(z-e1,z-e2)<<endl;
    else
    cout<<0<<endl;
}