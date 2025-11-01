#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
using vl= vector<ll>;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    int t;
    cin>>t;
    ll mini=1e9;
    ll flag=0;
    while(t--)
    {
        ll x;
        cin>>x;
        if(x==0)
        flag=1;
        else
        mini=min(mini,abs(0-x));
    }
    if(flag==0)
    cout<<mini<<endl;
    else
    cout<<0<<endl;
}