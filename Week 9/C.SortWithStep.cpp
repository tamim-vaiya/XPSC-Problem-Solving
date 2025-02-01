#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        int n, k, count = 0; cin >> n >> k;
        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if((a[i] - i) % k != 0)
            {
                count++;
            }
        }
        if(count > 2)
        {
            cout << -1 << nl;
        } else {
            cout << ((!count) ? 0 : 1) << nl;
        }
    }

    return 0;
}