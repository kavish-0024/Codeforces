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
    vector<int>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];

    int count=1;
    int mcount =1;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            count++;
        }
        else
        {
            mcount=max(mcount,count);
            count=1;
        }
    }
    mcount=max(mcount,count); 
    cout<<mcount<<endl;

}