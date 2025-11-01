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
        ll n,x;
        cin>>n>>x;
        vl a(n,0);
        cin>>a[0];
        ll maxi=a[0]-0;
        F(i,1,n)
        {
            cin>>a[i];
            maxi=max(maxi,a[i]-a[i-1]);
        }
        maxi=max(maxi,(x-a[n-1])*2);
        cout<<maxi<<endl;
    }
}