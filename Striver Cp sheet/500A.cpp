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
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0;i<n-1;i++)
    cin>>a[i];
    int count=1,i=0,flag=0;
    while(count<=t && i<n-1)
    {
        if(count==t)
        {
            flag=1;
            break;
        }
        count=count+a[i];
        i+=a[i];
    }
    if(count==t)
    flag=1;
    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}