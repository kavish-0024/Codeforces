#include<bits/stdc++.h> 
using namespace std; 
using ll=long long; 
#define F(i,s,e) for(ll i=s;i<e;i++) 
#define FR(i,e,s) for (ll i=e;i>=s;i--) 
using vl= vector<ll>; 
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 

int main() { 
    IOS; 
    int t; 
    cin >> t; 
    while (t--) { 
        ll n; 
        cin >> n; 

        ll i = 0;
        ll j = 1;

        while (j <= n) {
            i += 9;
            if (j > n / 10) break;
            j *= 10;
        }

        ll k = n;
        while (k >= 10) {
            k /= 10;
        }
        
        i -= (9 - k);

        cout << i<< endl;
    } 
    return 0;
}
