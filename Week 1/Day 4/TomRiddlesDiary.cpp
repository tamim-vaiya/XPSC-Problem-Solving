#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    map<string,bool> mp;
    string s;

    while(t--)
    {
        cin >> s;
        if(mp[s] != true)
        {
            cout << "NO" << '\n';
            mp[s] = true;
        } else {
            cout << "YES" << '\n';
        }
    }

    
    return 0;
}