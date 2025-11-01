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
        ll sum=0;
        F(i,0,n)
        {
            cin>>a[i];
        }
        bool flag=true;
        F(i,1,n)
        {
            if(a[i]!=a[0])
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<endl;
            cout<<a[n-1]<<" ";
            F(i,0,n-1)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
    }
}