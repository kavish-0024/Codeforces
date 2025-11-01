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
    ll n,k,x;
    cin>>n>>k;
    vl a(k+1,0);
    F(i,0,n)
    {
        cin>>x;
        a[x]++;
    }
    
    ll num = 0;
    F(i, 1, k + 1)
    {
        num += (a[i] / 2) * 2;
    }

    x = (n + 1) / 2;
    
    num += min(n - num, x - (num / 2));
    
    cout << num << endl;
}