#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define FR(i,e,s) for(ll i = e; i >= s; i--)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

void f(int i, int n, int val) {
    if (i == n) {
        cout << val << " ";
        return;
    }

    f(i + 1, n, val | (1 << i));
    int l = 1 << (n - 1 - i);
    for (int j = 0; j < l; j++) {
        cout << (val | (j << (i + 1))) << " ";
    }
}

void solve() {
    int n;
    cin >> n;

    f(0, n, 0);
    cout << '\n';
}


int main() {
    IOS;
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
