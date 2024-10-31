#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int,int> freq;
    for(auto box : v)
    {
        freq[box]++;
    }

    int ans = 0;
    for(auto [key, value] : freq)
    {
        ans = max(ans, value);
    }

    cout << ans << endl;
    
    
    
    return 0;
}


