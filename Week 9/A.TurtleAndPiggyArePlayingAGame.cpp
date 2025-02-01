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
        int n; cin >> n;
        vector<int> a(n);
        for(int &x : a) cin >> x;
        sort(a.begin(), a.end());
        cout << a[n/2] << nl;
    }

    return 0;
}