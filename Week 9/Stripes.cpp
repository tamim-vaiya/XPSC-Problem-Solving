#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i < 100000; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << nl;
        }
    }
    

    return 0;
}