#include<bits/stdc++.h>
#include<numeric>
using namespace std;
using ll=long long;
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
using vl= vector<ll>;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

ll my_gcd(ll a, ll b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vl a(n,0);
        F(i,0,n)
            cin>>a[i];
        bool flag=false;
        F(i,0,n)
        {
            F(j,i+1,n)
            {
                if(my_gcd(a[i], a[j]) <= 2)
                {
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}