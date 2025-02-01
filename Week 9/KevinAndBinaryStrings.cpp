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
        string s;
        cin >> s;
        int n = s.size();
        int a = 1, b = s.size(), c, d;
        if (s == string(n, '1'))
            c = 1, d = 1;
        else
        {
            int idx = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    idx = i + 1;
                    int count = 0, temp = i;
                    while (temp < n && s[temp] == '0')
                    {
                        count++;
                        temp++;
                    }
                    c = max(1, idx - count);
                    break;
                }
            }
            d = c + (n - idx);
        }
        cout << a << " " << b << " " << c << " " << d << nl;
    }

    return 0;
}