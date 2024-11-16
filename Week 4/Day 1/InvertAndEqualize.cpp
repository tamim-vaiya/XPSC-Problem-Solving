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
        string s; cin >> s;
        int cz = 0, co = 0, i = 0;
        while(i < n)
        {
            if(s[i] == '0')
            {
                cz += 1;
                while(i < n && s[i] == '0') i++;
            } else {
                co += 1;
                while(i < n && s[i] == '1') i++;
            }
        }
        cout << min(co,cz) << nl;
        
    }

    return 0;
}