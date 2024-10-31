#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s, ns; cin >> s;
        ns = s;

        sort(s.begin(),s.end());
        auto uniS = unique(s.begin(),s.end());

        int sz = 0;
        vector<char> uniChar;

        for(auto it = s.begin(); it != uniS; ++it)
        {
            uniChar.push_back(*it);
            sz++;
        }

        map<char,char> mp;

        int i = 0, j = sz - 1;
        while(i <= j)
        {
            mp[uniChar[i]] = uniChar[j];
            mp[uniChar[j]] = uniChar[i];
            i++;
            j--;
        }
        
        for (int i = 0; i < ns.size(); i++)
        {
            cout << mp[ns[i]];
        }

        cout << '\n';
    }

    return 0;
}