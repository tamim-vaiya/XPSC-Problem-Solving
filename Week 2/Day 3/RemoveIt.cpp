#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x != m)
        {
            a.push_back(x);
        }
    }
    for (int val : a)
    {
        cout << val << " ";
    }
    cout << '\n';

    return 0;
}