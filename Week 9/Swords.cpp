#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> v(n), ans;
    for (auto &vl : v)
        cin >> vl;
    ll mx = *max_element(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
    {
        if (v[i] != mx)
        {
            ans.push_back(mx - v[i]);
        }
    }
    sort(ans.begin(), ans.end());
    ll x = ans[0];
    for (auto vl : ans)
        x = __gcd(x, vl);
    ll y = 0;
    for (auto vl : ans)
    {
        y += (vl / x);
    }
    cout << y << " " << x << nl;

    return 0;
}