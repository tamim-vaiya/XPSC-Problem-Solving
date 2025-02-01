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
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int count = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count++;
                if (count == m)
                {
                    ans++;
                    i += (k - 1);
                    count = 0;
                }
            }
            else
                count = 0;
        }
        cout << ans << nl;
    }

    return 0;
}