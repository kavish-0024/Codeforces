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
    int x;
    while(t--)
    {
        cin>>x;
        if(x==1)
        {
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;

}