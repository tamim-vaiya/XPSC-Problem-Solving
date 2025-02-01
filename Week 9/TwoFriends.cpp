#include <bits/stdc++.h>
#include <map>
using namespace std;

#define nl '\n'

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        int n; cin >> n;
        vector<int> v(n + 1);
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if(v[v[i]] == i)
            {
                ans = 1;
                break;
            }
        }
        (ans) ? cout << 2 << nl : cout << 3 << nl;
    }

    return 0;
}