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
        unordered_map<ll,ll>mp;
        F(i,0,n)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        if(mp.size()>2)
        cout<<"No"<<endl;
        else if(mp.size()==2)
        {
            ll count=0;
            int f=0;
            for(auto val:mp)
            {
                count+= pow(-1,f)*val.second;
                f=1;
            }
            if(count==1 || count==-1 || count==0)
            cout<<"Yes"<<endl;
            else 
            cout<<"No"<<endl;
        }
        else
        cout<<"Yes"<<endl;
    }
}