#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s[] = {"b", "b", "a", "a"};

    int i = 0, j = 0;
    while (i < n)
    {
        cout << s[j];
        j++;
        if (j == 4)
        {
            j = 0;
        }
        i++;
    }
    cout << nl;

    return 0;
}