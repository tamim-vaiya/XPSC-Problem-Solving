#include <bits/stdc++.h>
#include <set>
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
        int n, q;
        cin >> n >> q;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int brr[q];
        for (int i = 0; i < q; i++)
        {
            cin >> brr[i];
        }

        set<int> st;
        for (int i = 0; i < q; i++)
        {
            if (!st.count(brr[i]))
            {
                st.insert(brr[i]);
                for (int j = 0; j < n; j++)
                {
                    if (v[j] % (1 << brr[i]) == 0)
                    {
                        v[j] += (1 << (brr[i] - 1));
                    }
                }
            }
        }

        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << nl;
    }

    return 0;
}