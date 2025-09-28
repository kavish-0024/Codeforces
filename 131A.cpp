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
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        continue;
        else
        {
            cout<<s<<endl;
            return 0;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[0]>='a' && s[0]<='z')
        s[0]-=32;
        
        if(s[i]!=0 && s[i]>='A' && s[i]<='Z')
        s[i]+=32;
    }
    cout<<s<<endl;
}