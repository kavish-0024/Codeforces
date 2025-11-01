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
    int count =0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")
        count=count+4;
        else if(s=="Cube")
        count=count+6;
        else if(s=="Octahedron")
        count=count+8;
        else if(s=="Dodecahedron")
        count=count+12;
        else
        count=count+20;
    }
    cout<<count<<endl;
}