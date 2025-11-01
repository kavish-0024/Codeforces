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
    ll n,m,k,sum=0;
    cin>>n>>m>>k;
    vl a(n,0);
    F(i,0,n)
    cin>>a[i];
    sort(a.begin(),a.end());
    
    sum = (m / (k + 1)) * (k * a[n-1] + a[n-2]) + (m % (k + 1)) * a[n-1];
    
    cout<<sum;
}