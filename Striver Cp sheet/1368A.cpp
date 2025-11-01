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
        ll a,b,n;
        cin>>a>>b>>n;
        int count=0;
        while(a<=n && b<=n)
        {
            int maxi=max(a,b);
            int mini=min(a,b);
            a=maxi;
            b=mini;
            b+=a;
            count++;
        }
        cout<<count<<endl;
    }
}