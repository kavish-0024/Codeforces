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
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ||s[i]=='Y' 
         ||s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='y')
        continue;
        
        if(s[i]>='A' && s[i]<='Z')
        {
            ans+=".";
            ans+=s[i]+32;
        }
        else
        {
            ans+=".";
            ans+=s[i];
        }
    }
    cout<<ans<<endl;
}