#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
using vl= vector<ll>;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll i=0,j=s.size()-1;
        while(s[i]!=s[j] && i<j)
        {
            i++;
            j--;
        }
        if(i>j)
        cout<<0<<endl;
        else
        cout<<j-i+1<<endl;
    }
}