#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
#define vl vector<ll>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    int n;
    string s,s2;
    cin>>n;
    cin>>s;
    int t=0;
    for(int i=0; i<s.size();i++)
    {
        t++;
        s2+= s[i];
        i+=t;

    }
    cout<<s2<<endl;
}