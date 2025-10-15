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
        ll x,y;
        cin>>x>>y;
        if(y<=x)
            cout<<"YES"<<endl;
        else if(x==1)
            cout<<"NO"<<endl;
        else if(x<=3 && y>3)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;
    }
}
