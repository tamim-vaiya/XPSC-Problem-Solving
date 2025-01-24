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
        int n = 8;
        char mat[9][9];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }

        bool red = false;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 'R')
                {
                    cnt++;
                }
            }
            if (cnt == 8)
                red = true;
        }

        if (red)
        {
            cout << "R" << endl;
        }
        else
        {
            cout << "B" << endl;
        }
    }

    return 0;
}