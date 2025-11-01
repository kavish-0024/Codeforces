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
    ll k,r;
    cin>>k>>r;
    int count=1;
    while(1)
    {
        if(k*count%10==0 || (k*count-r)%10==0)
        {
            cout<<count;
            break;
        }
        count++;
    }
}