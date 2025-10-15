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
    ll n;
    cin>>n;
    vl a(n+1,0);
    F(i,1,n+1)
    cin>>a[i];
    // F(i,0,n+1)
    // cout<<a[i];
    ll cost=0,energy=0,sum=0;
    F(i,0,n)
    {
        sum=a[i]-a[i+1];
        energy+=sum;
        // cout<<sum<<energy<<endl;
        if(energy<0)
        {
            cost+=abs(energy);
            energy=0;
        }
    }
    cout<<cost<<endl;
}