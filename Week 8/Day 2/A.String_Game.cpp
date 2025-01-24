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

        int one = 0, zro = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
            else
                zro++;
        }

        int mn = min(one, zro);

        if (mn % 2 == 0)
            cout << "Ramos" << nl;
        else
            cout << "Zlatan" << nl;
    }

    return 0;
}