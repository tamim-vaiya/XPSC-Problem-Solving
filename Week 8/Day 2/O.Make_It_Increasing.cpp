#include <bits/stdc++.h>
#define ll long long int
#define nl endl

using namespace std;

void solution()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int ops = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] == 0)
        {
            cout << -1 << nl;
            return;
        }

        while (arr[i - 1] > 0 && arr[i] <= arr[i - 1])
        {
            arr[i - 1] /= 2;
            ops++;
        }
    }
    cout << ops << nl;
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