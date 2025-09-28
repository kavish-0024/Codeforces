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
    int p;

    cin >> n;
    vector<int> ans(n);

    for (int i = 1; i < n + 1; ++i)
    {
        cin >> p;
        ans[p - 1] = i;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";

    return 0;
}