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
    ll a,b,s;
    cin>>a>>b>>s;
    ll steps;
    steps=abs(a)+abs(b);
    if(steps>s)
    cout<<"No"<<endl;
    else if((s-steps)%2==1)
    cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;
}