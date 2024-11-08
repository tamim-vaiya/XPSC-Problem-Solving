#include <bits/stdc++.h>
using namespace std;

// Both Easy and Hard Version Solved with This one. 

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
        priority_queue<ll> pq;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if(v[i]==0)
            {
                if(pq.size() > 0)
                {
                    ans += pq.top();
                    pq.pop();
                }
            } else {
                pq.push(v[i]);
            }
        }
        cout << ans << nl;
        
    }

    return 0;
}