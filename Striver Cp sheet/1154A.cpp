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
    vl a(4,0);
    F(i,0,4)
    cin>>a[i];
    sort(a.begin(),a.end());
    cout<<a[3]-a[0]<<" ";
    cout<<a[3]-a[1]<<" ";
    cout<<a[3]-a[2]<<endl;
}