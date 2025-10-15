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
        ll count4=0,sum=0,count5=0;
        for(int i=0;i<s.size();i++)
        {
            sum+=s[i]-'0';
            if((s[i]-'0')%2==0)
            count4++;
            if(s[i]=='0')
            count5++;
        }
        if(sum%3==0 && count5>=1 && count4>=2)
        cout<<"red"<<endl;
        else
        cout<<"cyan"<<endl;
    }
}
