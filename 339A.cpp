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
    string s;
    cin >> s;
    vector<int> a(3);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            a[0]++;
        else if (s[i] == '2')
            a[1]++;
        else if (s[i] == '3')
            a[2]++;
    }
    string s1;
    while (a[0] != 0)
    {
        s1.push_back('1');
        s1.push_back('+');
        a[0]--;
    }
    while (a[1] != 0)
    {
        s1.push_back('2');
        s1.push_back('+');
        a[1]--;
    }
    while (a[2] != 0)
    {
        s1.push_back('3');
        s1.push_back('+');
        a[2]--;
    }
    if (!s1.empty())
        s1.pop_back();
    cout << s1 << endl;
    return 0;
}