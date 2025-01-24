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

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ones = count(arr.begin(), arr.end(), 1);
        ll zeros = count(arr.begin(), arr.end(), 0);

        if (ones == 0)
        {
            cout << 0 << nl;
        }
        else
        {
            cout << ones * (1LL << zeros) << nl;
        }
    }

    return 0;
}