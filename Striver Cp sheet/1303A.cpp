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
        string s;
        cin>>s;
        int count=0;
        int l=0,r=0;


        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                l=i;
                break;
            }
        }
        for(int i=s.size()-1;i>0;i--)
        {
            if(s[i]=='1')
            {
                r=i;
                break;
            }
        }
        if(l==r)
        {
            cout<<0<<endl;
        }
        else
        {
        for(int i=l;i<=r;i++)
        {
            if(s[i]=='0')
            count++;
        }
        cout<<count<<endl;
    }
    }
}