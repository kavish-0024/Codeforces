#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
    ll n;
    cin >> n;

    ll Ax, Ay, Bx, By;
    cin >> Ax >> Ay >> Bx >> By;

    map<ll, pair<ll,ll>> mp;

    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (!mp.count(x))
            mp[x] = {y, y};
        else {
            mp[x].first = min(mp[x].first, y);
            mp[x].second = max(mp[x].second, y);
        }
    }

    ll prev_x = Ax;
    ll prev_low = Ay, prev_high = Ay;
    ll dp_low = 0, dp_high = 0;

    for (auto &it : mp)
    {
        ll x = it.first;
        ll L = it.second.first;
        ll R = it.second.second;

        ll dx = x - prev_x;

        ll new_low = min(
            dp_low  + abs(prev_low  - R),
            dp_high + abs(prev_high - R)
        ) + (R - L) + dx;

        ll new_high = min(
            dp_low  + abs(prev_low  - L),
            dp_high + abs(prev_high - L)
        ) + (R - L) + dx;

        dp_low = new_low;
        dp_high = new_high;
        prev_low = L;
        prev_high = R;
        prev_x = x;
    }

    ll ans = min(
        dp_low  + (Bx - prev_x) + abs(By - prev_low),
        dp_high + (Bx - prev_x) + abs(By - prev_high)
    );

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--)
        solve();

    return 0;
}