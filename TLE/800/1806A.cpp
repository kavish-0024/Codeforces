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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c && b==d)
        cout<<0<<endl;
        else if(b>d)
        cout<<-1<<endl;
        else
        {
           ll moves=d-b;
           a+=moves;
           if(a<c)
           cout<<-1<<endl;
           else
           cout<<moves+(a-c)<<endl;
        }
    }
}