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
        ll n;
        cin>>n;
        if((n/2)%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=0; i<n/2; i++)
            {
                cout << 2*(i+1) << " ";
            }
            for(int i=0; i<n/2 - 1; i++)
            {
                cout << 2*i + 1 << " ";
            }
            cout << n + (n/2) - 1 << endl;
        }
    }
}