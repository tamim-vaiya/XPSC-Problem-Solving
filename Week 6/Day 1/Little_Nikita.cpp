#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
   ll t; cin>>t;
   while(t--)
   {
    ll x,y,ans; cin>>x>>y;
    
    if(y>x)
    {
        cout<<"No\n"<<endl;
    }
    else
    {
        if((x-y)%2==0)
        {
            cout<<"Yes\n"<<endl;
        }
        else
        {
            cout<<"No\n"<<endl;
        }
        
    }
   }
   return 0;
}
