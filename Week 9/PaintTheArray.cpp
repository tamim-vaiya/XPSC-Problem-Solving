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
        vector<ll> v(n);
        for (auto &vl : v)
            cin >> vl;
        ll x = v[1], y = v[0];
        for (ll i = 0; i < n; i++)
        {
            if (i & 1)
            {
                x = __gcd(x, v[i]);
            }
            else
                y = __gcd(y, v[i]);
        }
        if (x == y)
        {
            cout << 0 << nl;
            continue;
        }
        else
        {
            bool flag = true;
            for (ll i = 0; i < n; i += 2)
            {
                if (v[i] % x == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << x << nl;
                continue;
            }
            flag = true;
            for (ll i = 1; i < n; i += 2)
            {
                if (v[i] % y == 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << y << nl;
                continue;
            }
        }
        cout << 0 << nl;
    }

    return 0;
}