#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

bool prime(int n)
{
    for (int i = 2; (i * i) <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    if (prime(n)) cout << 1 << endl;
    else if (n % 2 == 0 || prime(n - 2)) cout << 2 << endl;
    else cout << 3 << endl;

    return 0;
}