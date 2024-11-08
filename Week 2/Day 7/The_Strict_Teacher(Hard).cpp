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
        int n, m, q; cin >> n >> m >> q;
        vector<int> t(m);
        for (int i = 0; i < m; i++)
        {
            cin >> t[i];
        }
        sort(t.begin(),t.end());
        while(q--)
        {
            int d; cin >> d;
            if(d < t[0]) 
            {
                cout << t[0] - 1 << nl;
                continue;
            }
            if(d > t[m-1])
            {
                cout << n - t[m-1] << nl;
                continue;
            }
            auto it = lower_bound(t.begin(),t.end(), d);
            auto jt = it;
            jt--;

            int l = *jt, r = *it;
            int mid = (r+l)/2;
            cout << min(abs(mid-l),abs(mid-r)) << nl;
        }
    }

    return 0;
}