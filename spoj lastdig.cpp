#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int  mod_pow(int x, int  y, int p)
{
    int res = 1;

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
        int a;
        long long int b;
        cin>>a>>b;
        if(b==0)
            cout<<1<<endl;
        else
        {
            if(b%4==0)
                b = 4;
            else
                b = b%4;
            cout<<mod_pow(a,b,10)<<endl;
        }

    }



    return 0;
}
