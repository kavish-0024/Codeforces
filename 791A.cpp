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
    ll a,b;
    cin>>a>>b;
    int count=0;
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        count++;
    }
    cout<<count<<endl;
}