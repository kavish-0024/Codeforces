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
    int n;
    cin>>n;
    vector<int>a(n);
    int maxn=INT_MIN,minn=INT_MAX;
    int maxi=0,mini=n-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>maxn)
        {
            maxi=i;
            maxn=a[i];
        }
        if(a[i]<=minn)
        {
            mini=i;
            minn=a[i];
        }
    }
    int ans=(maxi-0)+(n-1-mini);
    if(maxi<mini)
    cout<<ans<<endl;
    else
    cout<<ans-1<<endl;
}