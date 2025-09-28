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
    cin>>s;
    ll count=0;
    for(int i=0;i<s.size();i++)
    {
        {
            if(s[i]=='7' || s[i]=='4')
            count++;
            else
            {
                continue;
            }
        }
    }
if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}