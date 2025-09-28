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

    int x = 0;

    for (int i = 0; i < n; ++i) {
        string statement;
        cin >> statement;

        if (statement[1] == '+') {
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;
    
}