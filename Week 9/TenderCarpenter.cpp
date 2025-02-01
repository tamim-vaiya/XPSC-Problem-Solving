#include <bits/stdc++.h>
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
        ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &vl : v)
        cin >> vl;
    for (int i = 1; i < n - 1; i++)
    {
        if (((2 * (min(v[i], v[i - 1])) > max(v[i], v[i - 1]))) || ((2 * (min(v[i], v[i + 1])) > max(v[i], v[i + 1]))))
        {
            cout << "YES" << nl;
            continue;
        }
    }
    if ((2 * (min(v[0], v[1])) > max(v[0], v[1])) || ((2 * min(v[n - 1], v[n - 2])) > max(v[n - 1], v[n - 2])))
    {
        cout << "YES" << nl;
        continue;
    }
    cout << "NO" << nl;
    }

    return 0;
}