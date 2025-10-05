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
    cin>>n;
    int fours = -1;
    int sevens = -1;

    for (int s = n / 7; s >= 0; --s) {
        int sum = n - (s * 7);
        if (sum >= 0 && sum % 4 == 0) {
            fours = sum / 4;
            sevens = s;
            break;
        }
    }

    if (fours == -1) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < fours; ++i) {
            cout << 4;
        }
        for (int i = 0; i < sevens; ++i) {
            cout << 7;
        }
        cout << endl;
    }

    return 0;
}