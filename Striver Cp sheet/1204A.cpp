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
    string s;
    getline(cin, s);

    int l = s.length() - 1;
    int missed = l / 2;

    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] != '0')
        {
            cout << missed + 1;
            return 0;
        }
    }

    cout << missed + l % 2;
    return 0;
}
