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
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        sum+=(i+1)*(n-i)-i;
    }
    cout<<sum<<endl;
    return 0;
}