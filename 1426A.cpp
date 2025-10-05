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
        ll n,x;
        cin>>n>>x;
        if(n<=2)
        cout<<1<<endl;
        else if((n-2)%x==0)
        cout<<(n-2)/x+1<<endl;
        else
        cout<<(n-2)/x+2<<endl;
    }
}