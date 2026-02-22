#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define FR(i,e,s) for(ll i = e; i >= s; i--)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    ll n;
    cin >> n;

    vl a(n + 1); 
    F(i, 1, n + 1) {
        cin >> a[i];
    }
    bool flag = true;
    ll s=n%2==1?n/2:n/2+1;
    F(i,s,n+1)
    {
        if(i%2==1 && a[i]!=i)
        {
            cout<<"NO"<<nl;
            return;
        }
    }
    cout<<"YES"<<nl;
}

int main() {
    IOS;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
