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
    string s;
    ll nb,ns,nc,pb,ps,pc,mon;
    cin>>s;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>mon;
    vl a(3,0);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')
        a[0]++;
        else if(s[i]=='S')
        a[1]++;
        else
        a[2]++;
    }
    // ll count=0,mini=1e9;
    // mini=min(nb/a[0],min((ns/a[1]),(nc/a[2])));
    // count=mini;
    // nb-=mini;
    // ns-=mini;
    // nc-=mini;
    // cout<<count<<endl;
    ll low=0,high=1e14;
    ll ans=0;
    while(low<=high)
    {
        ll mid=(low+high)/2;
        ll tb=mid*a[0];
        ll ts=mid*a[1];
        ll tc=mid*a[2];

        ll bb=max(0LL,tb-nb);
        ll bs=max(0LL,ts-ns);
        ll bc=max(0LL,tc-nc);
        
        ll cost=bb*pb+bs*ps+bc*pc;

        if(cost<=mon)
        {
            ans=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        } 
    }
    cout<<ans<<endl;
}