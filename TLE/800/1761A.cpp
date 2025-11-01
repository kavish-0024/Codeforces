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
    ll n,a,b;
    while(t--){
		cin >> n >> a >> b;
		if(n == a && a == b) 
        cout << "Yes\n";
		else
        {
			if(n - (a + b) >= 2)
            cout << "Yes\n";
			else 
            cout << "No\n";
		}
	}	
	return 0;
}
