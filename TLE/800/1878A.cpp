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
        ll n,k;
        cin>>n>>k;
        ll count=0;
        F(i,0,n)
        {
            ll x;
            cin>>x;
            if(x==k)
            count++;
        }
        if(count)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;

    }
}