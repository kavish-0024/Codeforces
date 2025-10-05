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
        vl a(3);
        F(i, 0, 3)
            cin >> a[i];
            
        sort(a.begin(), a.end());

        if (a[1] == a[2])
        {
            cout << "YES" << endl;
            cout << a[0] << " " << a[0] << " " << a[2] << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}