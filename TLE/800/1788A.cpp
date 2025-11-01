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
        ll count1=0,count2=0;
        F(i,0,n)
        {
            cin>>a[i];
            if(a[i]==1)
            count1++;
            else 
            count2++;
        }
        if(!count2)
        cout<<1<<endl;
        else if(count2%2==1)
        cout<<-1<<endl;
        else
        {
            count2=count2/2;
            ll count=0;
            F(i,0,n)
            {
                if(a[i]==2)
                count++;
                if(count==count2)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
}