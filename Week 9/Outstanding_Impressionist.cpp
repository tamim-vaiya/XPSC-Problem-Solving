#include <bits/stdc++.h>
#include <map>
#include <climits>
#include <set>
using namespace std;

#define nl '\n'
#define ll long long

ll lowestInRange(set<ll> &s, ll l, ll r)
{
    auto it = s.lower_bound(l);
    if (it != s.end() && *it <= r)
    {
        return *it;
    }

    return -1;
}

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
        vector<pair<ll, ll>> v(n);
        map<ll, ll> m;
        ll mn = LLONG_MAX, mx = LLONG_MIN;
        for (auto &[x, y] : v)
        {
            cin >> x >> y;
            mn = min(x, mn), mx = max(y, mx);
            if (x == y)
                m[x]++;
        }
        set<ll> st;
        for (ll i = mn; i <= mx; i++)
        {
            if (m[i] == 0)
                st.insert(i);
        }
        vector<ll> ans(n, -1);
        for (ll i = 0; i < n; i++)
        {
            if (v[i].first == v[i].second)
            {
                if (m[v[i].first] == 1)
                {
                    ans[i] = 1;
                }
            }
            else
            {
                ll lst = lowestInRange(st, v[i].first, v[i].second);
                if (lst != -1)
                {
                    ans[i] = lst;
                    m[lst]++;
                }
            }
        }
        for (auto vl : ans)
        {
            if (vl == -1)
                cout << '0';
            else
                cout << '1';
        }
        cout << nl;
    }

    return 0;
}