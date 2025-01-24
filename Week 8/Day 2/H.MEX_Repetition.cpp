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
        int n, k, b, brk, lst;
        cin >> n >> k;

        vector<int> v, t;
        for (int i = 0; i < n; i++)
        {
            cin >> b;
            v.push_back(b);
        }

        t = v;
        sort(t.begin(), t.end());
        brk = n;
        for (int i = 0; i < n; i++)
        {
            if (t[i] != i)
            {
                brk = i;
                break;
            }
        }

        int tmp;
        for (int i = 0; i < n; i++)
        {
            swap(v[i], brk);
        }
        v.push_back(brk);

        lst = (k - 1) % (n + 1);
        for (int i = (n + 1 - lst); i < (n + 1); i++)
        {
            cout << v[i] << " ";
        }

        for (int i = 0; i < (n - lst); i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }

    return 0;
}