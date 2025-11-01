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
    bool round=true;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        a[i]=a[i]/2;
        else
        {
            if(round)
            {
                if(a[i]>0)
                a[i]=a[i]/2+1;
                else
                a[i]=a[i]/2;
            }
            else
            {
                if(a[i]>0)
                a[i]=a[i]/2;
                else
                a[i]=a[i]/2-1;
            }
            round=!round;
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}