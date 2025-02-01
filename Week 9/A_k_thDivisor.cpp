#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    for (ll i = 1; (i * i) <= n; i++)
    {
        if (n % i == 0)
            v.push_back(i);
        if ((n / i) != i)
            v.push_back(n / i);
    }
    sort(v.begin(), v.end());
    if (v.size() < k)
        cout << -1 << nl;
    else
        cout << v[k - 1] << nl;

    return 0;
}