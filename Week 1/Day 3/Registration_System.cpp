#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string s; 
    map<string,pair<bool,int>> mp;
    while(t--)
    {
        cin >> s;
        if(mp[s].first == false) 
        {
            cout << "OK" << '\n';
            mp[s].first = true;
            mp[s].second = 0;
        } else {
            int i = ++(mp[s].second);
            string ns = s + to_string(i);
            cout << ns << '\n';
            ns = s;
            mp[s].first = true;
            mp[s].second = i;
        }
    }

    return 0;
}