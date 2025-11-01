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
        ll n;
        cin>>n;
        ll count1=0,count2=0;
        F(i,0,n)
        {
            ll x;
            cin >> x;
            if (x == -1)
                count1++;
            else
                count2++;
        }
        ll need = 0;
        if (count1 > count2)
        {
            ll diff = count1 - count2;
            ll op = (diff + 1) / 2;
            need += op;
            count1 -= op;
        }
        if (count1 % 2 != 0)
        {
            need += 1;
        }
        cout << need << "\n";
    }
}