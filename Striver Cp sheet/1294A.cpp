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
        ll n,need;
        vl a(3);
        F(i,0,3)
        cin>>a[i];
        sort(a.begin(),a.end());
        cin>>n;
        need=2*a[2]-a[1]-a[0];
        if(need>n)
        cout<<"NO"<<endl;
        else if((n-need)%3!=0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
}