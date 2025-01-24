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
        int n;
        cin >> n;

        vector<ll> x(n), y(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> y[i];
        }

        vector<ll> diff;
        int neg = 0;
        for (int i = 0; i < n; i++)
        {
            diff.push_back(y[i] - x[i]);
            if ((y[i] - x[i]) < 0)
                neg++;
        }

        sort(diff.begin(), diff.end());
        int i = 0, j = n - 1;
        int cnt = 0;

        while (i < j)
        {
            if (diff[i] + diff[j] >= 0)
            {
                cnt++;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}