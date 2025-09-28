#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i, s, e) for (ll i = s; i < e; i++)
#define FR(i, e, s) for (ll i = e; i >= s; i--)
#define vl vector<ll>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    IOS;
    string s, s2;
    cin >> s;
    s2 = s;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {

        if (i)
        {
            if (9 - (s[i] - '0') >= 0 && (9 - (s[i] - '0')) < s[i] - '0')
            {

                s[i] = (9 - (s[i] - '0')) + '0';
            }
        }
        else
        {
            if (9 - (s[i] - '0') > 0 && (9 - (s[i] - '0')) < s[i] - '0')
            {

                s[i] = (9 - (s[i] - '0')) + '0';
            }
        }
    }

    if (s < s2)
        cout << s << "\n";
    else
    {
        cout << s2 << "\n";
    }

    return 0;
}