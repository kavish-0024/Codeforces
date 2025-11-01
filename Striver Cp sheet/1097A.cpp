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
    string s[6];
    for(int i=0;i<6;i++)
    cin>>s[i];
    for(int i=1;i<6;i++)
    {
        if(s[i][0]==s[0][0] || s[i][0]==s[0][1] || s[i][1]==s[0][0] || s[i][1]==s[0][1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}