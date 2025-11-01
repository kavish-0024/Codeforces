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
        ll n,k;
        cin>>n>>k;
        vl a(n,0);
        F(i,0,n)
        cin>>a[i];
        ll flag=0;
        F(i,0,n-1)
        {
            if(a[i]>a[i+1])
            {
                flag=1;
                break;
            }
            else
            continue;
        }
        if(flag && k==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}