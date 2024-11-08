#include <bits/stdc++.h>
#include <map>
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
        int a[n], b[n];
        map<int,int> mp;
        vector<int> o;
        vector<int> z;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            mp[a[i]] = i;
        }

        string s; cin >> s;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '0') z.push_back(a[i]);
            else o.push_back(a[i]);
        }
        sort(z.begin(),z.end());
        sort(o.begin(),o.end());
        sort(a, a+n);

        reverse(z.begin(),z.end());
        reverse(o.begin(),o.end());
        reverse(a, a+n);
        
        int i;
        for (i = 0; i < o.size(); i++) b[mp[o[i]]] = a[i];
        for (int j = 0; j < z.size(); j++)
        {
            b[mp[z[j]]] = a[i];
            i++;
        }

        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
            cout << nl;
        
        
    
    }

    return 0;
}