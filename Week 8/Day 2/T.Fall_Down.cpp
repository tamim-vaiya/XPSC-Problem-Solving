#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solution()
{
    int n, m;
    cin >> n >> m;

    char mat[n + 1][m + 1];
    char ans[n + 1][m + 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[i][j] = '.';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int j = 0; j < m; j++)
    {
        mat[n][j] = 'o';
    }

    int str = 0;
    vector<pair<pair<int, int>, int>> track;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (mat[j][i] == '*')
            {
                str++;
            }
            if (mat[j][i] == 'o' && str != 0)
            {
                track.push_back({{j, i}, str});
                str = 0;
            }
        }
    }

    for (auto item : track)
    {
        int x = item.first.first;
        int y = item.first.second;
        int str = item.second;
        for (int i = (x - str); i < x; i++)
        {
            ans[i][y] = '*';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 'o')
            {
                ans[i][j] = 'o';
            }
            cout << ans[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        solution();
    }
    return 0;
}