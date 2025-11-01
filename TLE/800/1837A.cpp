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
    while(t--)
    {
        ll x,k;
        cin>>x>>k;
        if(x%k)
        {
            cout<<1<<endl<<x<<endl;
        }
        else
        {
            cout<<2<<endl<<1<<" "<<x-1<<endl;
        }
    }
}