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
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;

        if (2 * l <= r)
        {
            cout << l << " " << 2 * l << "\n";
        }
        else
        {
            cout << -1 << " " << -1 << "\n";
        }
    }
    return 0;
}