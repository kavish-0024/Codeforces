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
        int n;
        string s;
        cin>>n;
        cin>>s;
        int first=-1,last=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                if(first==-1)
                first=i;
                last=i;
            }
        }
        if(first==-1)
        cout<<n<<endl;
        else
        {
            int x=2*(last+1);
            int y=2*(n-first);
            cout<<max(x,y)<<endl;
        }
    }
    
}