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
            cin>>x;
            if(x%2==0)
            count2++;
            else
            count1++;
        }
        if(count1%2==0 && count2%2==0)
        cout<<"Yes"<<endl;
        else if((count1%2==0 && count2==1) ||(count2%2==0 && !count1) ||  (count1%2==0 && count2) || (count1%2==0 && !count2 && (count1/2)%2==0))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}