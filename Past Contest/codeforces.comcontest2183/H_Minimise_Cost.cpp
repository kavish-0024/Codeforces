// #include<bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using vl = vector<ll>;
// using vvl = vector<vector<ll>>;

// #define F(i,s,e) for(ll i = s; i < e; i++)
// #define FR(i,e,s) for(ll i = e; i >= s; i--)
// #define nl '\n'
// #define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

// ll cost(int l, int r, vl &pref) {
//     ll sum = pref[r] - pref[l - 1];
//     ll len = r - l + 1;
//     return len * sum;
// }

// void f(int l, int r, int L, int R,
//        vl &prev, vl &cur, vl &pref) {

//     if (l > r) return;

//     int mid = (l + r) / 2;
//     ll bestVal = LLONG_MAX;
//     int bestPos = -1;

//     for (int j = L; j <= min(mid - 1, R); j++) {
//         if (prev[j] == LLONG_MAX) continue;

//         ll val = prev[j] + cost(j + 1, mid, pref);
//         if (val < bestVal) {
//             bestVal = val;
//             bestPos = j;
//         }
//     }

//     cur[mid] = bestVal;

//     f(l, mid - 1, L, bestPos, prev, cur, pref);
//     f(mid + 1, r, bestPos, R, prev, cur, pref);
// }

// void solve() {
//     int n, k;
//     cin >> n >> k;

//     vl a(n + 1), pref(n + 1);
//     F(i, 1, n + 1) cin >> a[i];

//     sort(a.begin() + 1, a.end());

//     F(i, 1, n + 1) pref[i] = pref[i - 1] + a[i];

//     vl prev(n + 1, LLONG_MAX), cur(n + 1, LLONG_MAX);
//     prev[0] = 0;

//     F(g, 1, k + 1) {
//         F(i, 0, n + 1) cur[i] = LLONG_MAX;
//         f(g, n, g - 1, n - 1, prev, cur, pref);
//         prev = cur;
//     }

//     cout << prev[n] << nl;
// }

// int main() {
//     IOS;
//     int t;
//     cin >> t;
//     while (t--) solve();
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;

#define F(i,s,e) for(ll i = s; i < e; i++)
#define FR(i,e,s) for(ll i = e; i >= s; i--)
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr);

vl pref, prevd, cur;

inline void f(int l, int r, int L, int R) {
    if (l > r) return;

    int mid = (l + r) / 2;
    ll bestVal = LLONG_MAX;
    int bestPos = -1;

    for (int j = L; j <= min(mid - 1, R); j++) {
        if (prevd[j] == LLONG_MAX) continue;

        ll sum = pref[mid] - pref[j];
        ll len = mid - j;
        ll val = prevd[j] + len * sum;

        if (val < bestVal) {
            bestVal = val;
            bestPos = j;
        }
    }

    cur[mid] = bestVal;

    f(l, mid - 1, L, bestPos);
    f(mid + 1, r, bestPos, R);
}

void solve() {
    int n, k;
    cin >> n >> k;

    vl a(n + 1);
    pref.assign(n + 1, 0);

    F(i, 1, n + 1) cin >> a[i];
    sort(a.begin() + 1, a.end());

    F(i, 1, n + 1) pref[i] = pref[i - 1] + a[i];

    prevd.assign(n + 1, LLONG_MAX);
    cur.assign(n + 1, LLONG_MAX);
    prevd[0] = 0;

    F(g, 1, k + 1) {
        fill(cur.begin(), cur.end(), LLONG_MAX);
        f(g, n, g - 1, n - 1);
        prevd = cur;
    }

    cout << prevd[n] << nl;
}

int main() {
    IOS;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
