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
    ll n;
    string s;
    ll sum,cons,maxi;
    while(t--)
    {
        cin>>n>>s;
        sum=0;
        cons=0;
        maxi=0;
        F(i,0,n)
        {
            if(s[i]=='.')
            {
                cons++;
                sum++;
            }
            else
            {
                maxi=max(maxi,cons);
                cons=0;
            }
        }
        maxi=max(maxi,cons);
        if(maxi>=3)
        cout<<2<<"\n";
        else
        cout<<sum<<"\n";

    }
}