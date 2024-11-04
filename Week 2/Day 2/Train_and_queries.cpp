#include <bits/stdc++.h>
#include <map>
#include <set>
using namespace std;

#define nl '\n'

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        int n, m; cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x; cin >> x;
            mp[x].insert(i);
        }
        for(int i = 1; i <= m; i++)
        {
            int l,r; cin >> l >> r;
            if((mp.find(l) == mp.end()) || (mp.find(r) == mp.end()))
            {
                cout << "NO" << endl;
            } else {
                int s = *mp[l].begin(), e = *mp[r].rbegin();
                if(s < e)
                {
                    cout << "YES" << nl;
                } else {
                    cout << "NO" << nl;
                }
            }
        }
    }

    return 0;
}