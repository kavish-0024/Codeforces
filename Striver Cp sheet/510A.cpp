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
    int n,m;
    cin>>n>>m;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0 || i==n-1 ||i%2==0)
            cout<<"#";
            else if(i%2==1 && flag)
            {
                if(j!=0)
                cout<<".";
                else
                cout<<"#";
            }
            else 
            {
                if(j!=m-1)
                cout<<".";
                else
                cout<<"#";
            }
        }
        if(i%2==1)
        flag=!flag;
        cout<<endl;
    }
}