#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    ll s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0;
    ll x = 0, result = 0;

    for (int r = 0; r < n; r++)
    {
        x += a[r];
        while (x >= s)
        {
            x -= a[l];
            l++;
        }
        result += l;
    }

    cout << result << endl;

    return 0;
}