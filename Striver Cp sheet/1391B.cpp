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
        ll n,m;
        cin>>n>>m;
        int count=0;
        vector<vector<char>>s(n,vector<char>(m,'0'));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>s[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s[i][m-1]=='R')
            count++;
        }
        for(int i=0;i<m;i++)
        {
            if(s[n-1][i]=='D')
            count++;
        }
        cout<<count<<endl;
    }
}