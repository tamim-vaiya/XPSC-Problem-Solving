#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        int n, x, y; cin >> n >> x >> y;
        vector<int> v;
        if(n % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                v.push_back(i % 2);
            }
            if(v[x - 1] == v[y - 1])
            {
                v[x - 1] = 2;
            }
        } 
        else 
        {
            for (int i = 1; i <= n; i++)
            {
                v.push_back(i % 2);
            }
            v.insert(v.begin() + x - 1, 2);
        }
        for (auto &num : v)
        {
            cout << num << " ";
        }
        cout << nl;
    }

    return 0;
}