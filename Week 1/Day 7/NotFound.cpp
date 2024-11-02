#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    sort(s.begin(),s.end());
    char ch = 'a';
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == ch) ch = char(ch + 1);
        if(ch > 'z')
        {
            cout << "None" << endl;
            return 0;
        }
    }

    cout << ch << endl;

    return 0;
}