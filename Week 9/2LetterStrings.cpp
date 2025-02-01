#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        unordered_map<string, ll> mp;
        vector<string> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            for (auto vl : mp)
            {
                if ((vl.first[0] != v[i][0] && vl.first[1] != v[i][1]) || (vl.first[0] == v[i][0] && vl.first[1] == v[i][1]))
                    continue;
                if (v[i][0] == vl.first[0] || v[i][1] == vl.first[1] || v[i][0] == vl.first[1] || v[i][1] == vl.first[0])
                {
                    ans += vl.second;
                }
            }
            mp[v[i]]++;
        }
        cout << ans << nl;
    }

    return 0;
}