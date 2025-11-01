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
        ll n;
        cin>>n;
        ll x;
        ll sum=0;
        F(i,0,n)
        {
            cin>>x;
            sum=x^sum;
        }
        if(n%2==0 && sum==0)
        cout<<0<<endl;
        else if(n%2==0 && sum!=0)
        cout<<-1<<endl;
        else
        cout<<sum<<endl;
    }
}