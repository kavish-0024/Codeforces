#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
using vl= vector<ll>;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k>>x;
        
        if (x != 1)
        {
            cout << "YES\n";
            cout << n << "\n";

            F(i, 0, n)
                cout << 1 << " ";
            cout << "\n";
        }
        else
        {
            if (k >= 2 and n % 2 == 0)
            {
                cout << "YES\n";
                cout << n / 2 << "\n";

                F(i, 0, n / 2)
                    cout << 2 << " ";
                cout << "\n";
            }
            else if (k >= 3)
            {
                cout << "YES\n";
                cout << n / 2 << "\n";
                cout << 3 << " ";
                F(i, 1, n / 2)
                    cout << 2 << " ";
                cout << "\n";
            }
            else
                cout << "NO\n";
        }
    }
    return 0;
}