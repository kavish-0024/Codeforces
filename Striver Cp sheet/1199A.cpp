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
    ll n,x,y;
    cin>>n>>x>>y;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    for (int i = 0; i < n;i++) {
        bool rainy = true;
        for (int j = 1; j <= x; j++) {
            if (i - j >= 0) {
                if (a[i] >= a[i - j]) {
                    rainy = false;
                    break;
                }
            }
        }

        if (!rainy) {
            continue;
        }
        
        for (int j = 1; j <= y; ++j) {
            if (i + j < n) {
                if (a[i] >= a[i + j]) {
                    rainy = false;
                    break;
                }
            }
        }

        if (rainy) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}