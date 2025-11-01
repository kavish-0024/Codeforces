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
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int>a;
        F(i,0,n)
        a.push_back(i+1);
        vector<pair<int,int>>ans;
        F(i,0,n-1)
        {
            auto it=a.end();
            it--;
            int x=*it;
            a.erase(it);
            it--;
            int y=*it;
            a.erase(it);

            ans.push_back(make_pair(x,y));
            a.push_back((x+y+1)/2);
        }
        cout<<a[0]<<endl;
        for(auto val:ans)
        cout<<val.first<<" "<<val.second<<endl;
    }
}