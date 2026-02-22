// #include<bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using vl = vector<ll>;
// using vvl = vector<vector<ll>>;

// #define F(i,s,e) for(ll i = s; i < e; i++)
// #define FR(i,e,s) for(ll i = e; i >= s; i--)
// #define nl '\n'
// #define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

// void solve() {
//     ll n, k;
//     cin >> n >> k;

//     if (k > n) {
//         cout << -1 << nl;
//         return;
//     }

//     for (ll time = 0; time <= 32; time++) {
//         ll d;
//         if (time >= 31) d = n + 1;  
//         else d = 1LL << time;

//         ll mn = n / d;
//         ll mx = (n + d - 1) / d;

//         if (mn <= k && k <= mx) {
//             cout << time << nl;
//             return;
//         }
//     }

//     cout << -1 << nl;
// }

// int main() {
//     IOS;
//     int t;
//     cin >> t;
//     while (t--) 
//     {
//         solve();
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using vl = vector<ll>;
// using vvl = vector<vector<ll>>;

// #define F(i,s,e) for(ll i = s; i < e; i++)
// #define FR(i,e,s) for(ll i = e; i >= s; i--)
// #define nl '\n'
// #define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

// void solve() {
//     ll n, k;
//     cin >> n >> k;

//     if (k > n) {
//         cout << -1 << nl;
//         return;
//     }

//     ll l = n, r = n;   
//     ll ans = -1;

//     for (ll moves = 0; r >= k; moves++) {
//         if (l <= k && k <= r) {
//             ans = moves;
//             break;
//         }

//         l = l / 2;          
//         r = (r + 1) / 2;   
//     }

//     cout << ans << nl;
// }

// int main() {
//     IOS;
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

