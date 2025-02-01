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
        vector<ll> v(n);
        for(ll &x : v) cin >> x;
        vector<ll> rnd(v);
        sort(rnd.begin(), rnd.end(), greater<ll>());
        map<ll, ll> mp;
        for(ll i = 0; i < n; i++)
        {
            mp[rnd[i]] = i + 1;
        }
        ll cnt = 0;
        for(ll i = 0; i < n; i++)
        {
            v[i] = mp[v[i]];
            if(i && abs(v[i] - v[i - 1]) == 1) cnt++;
        }
        cout << n - cnt << nl;

    }

    return 0;
}