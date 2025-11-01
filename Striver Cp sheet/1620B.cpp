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
        ll w,h,size_h1,size_h2,size_w1,size_w2;
        cin>>w>>h;

        cin>>size_h1;
        vl h1(size_h1,0);
        F(i,0,size_h1)
        cin>>h1[i];

        cin>>size_h2;
        vl h2(size_h2,0);
        F(i,0,size_h2)
        cin>>h2[i];

        cin>>size_w1;
        vl w1(size_w1,0);
        F(i,0,size_w1)
        cin>>w1[i];

        cin>>size_w2;
        vl w2(size_w2,0);
        F(i,0,size_w2)
        cin>>w2[i];

    }
}