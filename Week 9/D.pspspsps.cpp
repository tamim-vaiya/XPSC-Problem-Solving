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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0, z = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 's')
                x++;
            else if (s[i] == 'p')
                y++;
            else
                z++;
        }
        if (x == 0 || y == 0)
        {
            cout << "YES" << nl;
            continue;
        }
        if (s[0] == 's')
        {
            for (int i = 1; i < n; i++)
            {
                if (s[i] != 's')
                    count++;
            }
            if (count == n - 1)
            {
                cout << "YES" << nl;
                continue;
            }
        }
        if (s[n - 1] == 'p')
        {
            count = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (s[i] != 'p')
                    count++;
            }
            if (count == n - 1)
            {
                cout << "YES" << nl;
                continue;
            }
        }
        cout << "NO" << nl;
    }

    return 0;
}