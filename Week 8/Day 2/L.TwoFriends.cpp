#include <bits/stdc++.h>
#include <map>
#define ll long long int
#define nl cout << endl
using namespace std;

void solution()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[v[i]] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[i + 1] == v[i])
        {
            cout << 2 << endl;
            return;
        }
    }
    cout << 3 << endl;
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