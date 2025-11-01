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
        ll n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        ll count=0,flag=0;
        F(i,0,11)
        {
           if(x.find(s) != string::npos)
        {
            cout<<i<<"\n";
            flag=1;
            break;
        }
            x=x+x;
        }
        if(flag==0)
        cout<<-1<<"\n";

    }
}