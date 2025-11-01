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
        vl a(n,0);
        F(i,0,n)
        cin>>a[i];

        vl ans;
        ans.push_back(a[0]);
        F(i,1,n)
        {
            if(a[i]>=a[i-1])
            ans.push_back(a[i]);
            else
            {
                ans.push_back(1);
                ans.push_back(a[i]);
            }
        }
        cout<<ans.size()<<"\n";
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<"\n";
    }
}