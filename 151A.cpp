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
    ll  n, k, l, c, d, p, nl, np,c1,c2,c3;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    c1=(k*l)/nl;
    c2=c*d;
    c3=p/np;

    cout<<(min(c1,min(c2,c3)))/n<<endl;
}