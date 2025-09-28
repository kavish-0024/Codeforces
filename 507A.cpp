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
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    vector<int>ans;
    int time=0;
    for(int i=0;i<n;i++)
    {
        if(time+a[i].first<=k)
        {
            time+=a[i].first;
            ans.push_back(a[i].second);
        }
        else
        break;
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    
}