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
        ll n;
        cin>>n;
        vl a(n,0);
        F(i,0,n)
        cin>>a[i];
        ll mini=1e9;
        ll flag=0;
        F(i,1,n)
        {
            mini=min(mini,a[i]-a[i-1]);
            if(a[i]<a[i-1])
            flag=1;
        }
        if(flag)
        cout<<0<<endl;
        else
        {
            if(mini==0)
            cout<<1<<endl;
        else 
        cout<<mini/2 +1<<endl;
        }
    }
}