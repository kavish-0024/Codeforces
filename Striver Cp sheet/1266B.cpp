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
        ll n;
        cin>>n;
        if(n<15)
        cout<<"NO"<<endl;
        else
        {
            ll r=n%14;
            if(r>=1 && r<=6)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}