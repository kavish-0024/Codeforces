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
    if(s[0]>='a'&& s[0]<='z')
    s[0]=s[0]-32;
   // toupper(s[0]);
    cout<<s<<endl;
}