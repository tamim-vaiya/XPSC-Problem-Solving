#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int ans = 0;
        string s;
        cin >> s;
        int n = s.size();
        int a[2] = {0, 0};
        for (int i = 0; i < n; i++)
        {
            a[s[i] - '0']++;
        }

        for (int i = 0; i < n; i++)
        {
            if (a[!(s[i] - '0')] > 0)
            {
                a[!(s[i] - '0')]--;
            }
            else
            {
                ans = n - i;
                break;
            }
        }
        cout << ans << nl;
    }

    return 0;
}