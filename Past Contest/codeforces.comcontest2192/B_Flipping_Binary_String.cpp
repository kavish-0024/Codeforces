#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll count0=0,count1=0;
    F(i,0,n)
    {
        if(s[i]=='1')
        count1++;
        else
        count0++;
    }
    if(count1==0)
    {
        cout<<0<<nl;
        return;
    }
    if(count0%2!=0)
    {
        cout<<count0<<nl;
        F(i,0,n)
        {
            if(s[i]=='0')
            cout<<i+1<<" ";
        }
        cout<<nl;
        return;
    }
    else if(count1%2==0)
    {
        cout<<count1<<nl;
        F(i,0,n)
        {
            if(s[i]=='1')
            cout<<i+1<<" ";
        }
        cout<<nl;
        return;
    }
    else
    {
        cout<<-1<<nl;
        return;
    }

}

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}