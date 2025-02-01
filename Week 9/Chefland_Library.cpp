#include <bits/stdc++.h>
#include <map>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        ll n; cin >> n;
        vector<ll> a(n);
        for(ll &x : a) cin >> x;
        map<ll, ll> mp;

        for(ll i = 1; i <= n; i++)
        {
            mp[a[i - 1]] = max(mp[a[i - 1]], i);
        }
        ll ans = 0;
        for(auto x : mp)
        {
            ans += x.second;
        }
        cout << ans << nl;
    }

    return 0;
}