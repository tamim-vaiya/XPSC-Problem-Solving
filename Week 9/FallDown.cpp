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
        int n, m;
        cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int j = 0; j < m; j++)
        {
            int start = 0;
            int last = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i][j] == '*')
                    start++;
                if (i == n - 1 && a[i][j] != 'o')
                {
                    int temp = i;
                    while (temp >= last)
                    {
                        if (a[temp][j] == 'o')
                            break;
                        if (start > 0)
                            a[temp][j] = '*';
                        else
                            a[temp][j] = '.';
                        temp--, start = max(0, start - 1);
                    }
                    last = i;
                }
                else if (a[i][j] == 'o')
                {
                    int temp = i - 1;
                    while (temp >= last)
                    {
                        if (a[temp][j] == 'o')
                            break;
                        if (start > 0)
                            a[temp][j] = '*';
                        else
                            a[temp][j] = '.';
                        temp--, start = max(0, start - 1);
                    }
                    last = i;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << a[i][j];
            cout << nl;
        }
        cout << nl;
    }

    return 0;
}