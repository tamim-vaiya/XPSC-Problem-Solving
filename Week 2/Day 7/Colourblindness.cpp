#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s1, s2; cin >> s1 >> s2;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                if (!((s1[i] == 'G' || s1[i] == 'B') && (s2[i] == 'G' || s2[i] == 'B')))
                {
                    flag = false;
                }
            }
        }
        if (flag) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}