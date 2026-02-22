#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define FR(i,e,s) for(ll i = e; i >= s; i--)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() 
{
   ll n,count1=0,count0=0,R=-1,L=-1;
   cin>>n;
   string s;
   cin>>s;
   bool flag=false;
   if(n==1)
   {
        if(s[0]=='1')
        {
            cout<<0<<nl;
            return;
        }
        else
        {
            cout<<-1<<nl;
            return;
        }
   }
   F(i,0,n)
   {
    if(s[i]=='1')
    {
        if(flag==false)
        {
            flag=true;
            L=i;
        }
        R=i;
        count1++;
    }
    else 
    {
        count0++;
    }
   }
   if(flag==false)
   {
    cout<<-1<<nl;
    return;
   }
   else if(n==2)
   {
    cout<<2<<nl;
    return;
   }
   else if(s[0]=='1' || s[n-1]=='1')
   {
    cout<<n+1<<nl;
    return;
   }
   else
   {
    ll c1 = R - L + 1;
    ll len2 = n - (R - L);
    ll c2 = len2;

    cout << c1 + c2 << nl;
    return;
   }
}

int main() {
    IOS;
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
