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
        ll x,y;
        cin>>x>>y;
        ll a,b;
        cin>>a>>b;
        
        x = abs(x);
        y = abs(y);

        ll mini = min(x, y);
        ll maxi = max(x, y);
        ll cost = 0;

        cost += mini * min(b, 2 * a);

        cost += (maxi - mini) * a;

        cout << cost << "\n";
    }
    return 0;
}