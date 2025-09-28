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
    int sum=1,count=1;
    int i=2;
    while(sum<t)
    {
        sum=sum*2+i;
        i++;
        count++;
    }
    if(i==1|| i==2||i==3)
    cout<<1;
    else
    cout<<count;
    
}