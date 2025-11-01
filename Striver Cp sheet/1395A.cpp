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
        ll r,g,b,w;
        cin>>r>>g>>b>>w;
        ll mod=0;
        if(r%2==0)
        mod++;
        if(g%2==0)
        mod++;
        if(w%2==0)
        mod++;
        if(b%2==0)
        mod++;

        if(mod>=3)
        cout<<"YES"<<endl;
        else
        {
            mod=0;
            if(r>0 && g>0 && b>0)
            {
                r--;
                g--;
                b--;
                w++;
                if(r%2==0)
                mod++;
                if(g%2==0)
                mod++;
                if(w%2==0)
                mod++;
                if(b%2==0)
                mod++;

                if(mod>=3)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;

            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}