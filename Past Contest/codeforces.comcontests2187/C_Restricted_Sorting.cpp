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
    ll n;
    cin>>n;
    vl a(n);
    bool flag=false;
    ll maxi=LLONG_MIN,mini=LLONG_MAX;
    F(i,0,n)
    {
        cin>>a[i];
        if(i!=0 && a[i-1]>a[i])
        flag=true;
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }
    if(!flag)
    {
        cout<<-1<<nl;
        return;
    }
    vl b=a;
    sort(b.begin(),b.end());
    ll l=1,r=2e9;
    ll ans=1;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        ll x=maxi-mid;
        ll y=mini+mid;
        flag=true;
        if(x<y)
        {
            F(i,0,n)
            {
                if(a[i]>x && a[i]<y)
                {
                    if(a[i]!=b[i])
                    {
                        flag=false;
                        break;
                    }
                }
            }
        }
        if(flag)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<nl;
    

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
