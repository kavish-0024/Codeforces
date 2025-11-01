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
       ll a,b,c;
       cin>>a>>b>>c;
       if(c%2==0)
       {
            if(a>b)
            cout<<"First"<<endl;
            else
            cout<<"Second"<<endl;
       }
       else
       {
            b--;
            if(a>b)
            cout<<"First"<<endl;
            else
            cout<<"Second"<<endl;

       } 
    }
}