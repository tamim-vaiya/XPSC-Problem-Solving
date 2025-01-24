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
        ll n, num, fst = -1, lst = -1;
        cin >> n;

        bool flag = 0;
        while (n--)
        {
            cin >> num;
            if (flag)
            {
                if (num >= lst and num <= fst)
                {
                    lst = num;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if (fst == -1)
                {
                    fst = num;
                    lst = num;
                    cout << 1;
                }
                else if (num >= lst)
                {
                    lst = num;
                    cout << 1;
                }
                else if (fst >= num)
                {
                    lst = num;
                    flag = 1;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        cout << nl;
    }

    return 0;
}