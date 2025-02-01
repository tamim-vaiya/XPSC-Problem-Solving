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
        ll n; cin >> n;
        vector<int> v(n - 1);
        for(auto &x : v) cin >> x;
        vector<int> ans;

        ans.push_back(v[0]);
        for (ll i = 1; i < n - 1; i++)
        {
            ans.push_back(v[i] | ans[i - 1]);
        }
        ans.push_back(v.back());
        for (ll i = 1; i < n; i++)
        {
            if((ans[i] & ans[i - 1]) != v[i - 1])
            {
                cout << -1 << nl;
                continue;
            }
        }
        for(auto x : ans) cout << x << " ";
        cout << nl;
        
        
    }

    return 0;
}