#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
#define vl vector<ll>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    
    int n;
    cin>>n;
    int i,j,k;
    for(i=0;i<=n;i++)
    {for(j=0;j<=n-i-1;j++)
        cout<<"  ";
        
        for(j=0;j<i;j++)
        cout<<j<<" ";
        for(j;j>0;j--)
        cout<<j<<" ";
        cout<<j<<"\n";
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            cout<<"  ";
        if(i==n-1)break;
        for(j=0;j<=n-i-1;j++)
            cout<<j<<" ";
        j-=2;
        for(j;j>0;j--)
            cout<<j<<" ";
        if(j==0)cout<<j;
        cout<<"\n";
    }
    cout<<0;
    return 0;
}