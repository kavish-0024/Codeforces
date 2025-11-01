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
    int k,n,w;
    cin>>k>>n>>w;
    w=(w*(w+1))/2;
    k=w*k;
    if(k-n>=0)
    cout<<k-n<<endl;
    else
    cout<<0<<endl;
}