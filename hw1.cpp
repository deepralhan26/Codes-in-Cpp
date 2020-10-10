#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
long long MOD = 1e9 + 7;

long long mod_pow(long long x, long long y, long long p)
{
    long long res = 1;

    x = x % p;

    if (x == 0) return 0;

    while (y > 0)
    {

        if (y & 1)
            res = (res * x) % p;


        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}


int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans;
        ans = mod_pow(b,c,MOD-1);
        ans = mod_pow(a,ans,MOD);
        cout<<ans<<endl;
    }




    return 0;
}
