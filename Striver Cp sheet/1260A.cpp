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
    int t;
    cin>>t;
    while(t--)
    {
        ll c,sum;
        cin>>c>>sum;
        // if(sum%c==0)
        // {
        //     ll x=sum/c;
        //     cout<<x*x*c<<endl;
        // }
        // else
        {
            ll q=sum/c;
            ll r=sum%c;
            cout<<(q+1)*(q+1)*r+q*q*(c-r)<<endl;
        }
    }
}