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
    vector<int>a(7);
    F(i,0,7)
    cin>>a[i];
    int count=0;
    while(t>0)
    {
        int x=count%7;
        t-=a[x];
        count++;
    }
    if(count%7==0)
    cout<<7<<endl;
    else
    cout<<(count%7)<<endl;
}