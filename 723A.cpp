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
    vector<int>a(3);
    cin>>a[0]>>a[1]>>a[2];
    sort(a.begin(),a.end());
    cout<<a[2]-a[0]<<endl;
    
}