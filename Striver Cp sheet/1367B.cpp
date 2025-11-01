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
        ll n,ce=0,co=0;
        cin>>n;
        vl a(n,0);
        F(i,0,n)
        {
            cin>>a[i];
            if(i%2==0 && a[i]%2!=0)
            ce++;
            if(i%2==1 && a[i]%2!=1)
            co++;
        }
        if(ce==0 && co==0)
        cout<<0<<endl;
        else if(ce==co)
        cout<<ce<<endl;
        else 
        cout<<-1<<endl;
    }
}