#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            int b;
            string s;
            cin >> b >> s;
            for (int j = b - 1; j >= 0; j--)
            {
                if (s[j] == 'D')
                {
                    if (a[i] == 9)
                    {
                        a[i] = 0;
                    }
                    else
                        a[i]++;
                }
                else
                {
                    if (a[i] == 0)
                    {
                        a[i] = 9;
                    }
                    else
                        a[i]--;
                }
            }
            cout << a[i] << " ";
        }
        cout << nl;
    }

    return 0;
}