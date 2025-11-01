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
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll chocolates = 0;
    ll limit = 2000000007;

    for (int i = n - 1; i >= 0; --i) {
        ll buy = min(a[i], limit - 1);
        
        if (buy <= 0) {
            break;
        }

        chocolates += buy;
        limit = buy;
    }

    cout << chocolates << endl;

    return 0;
}