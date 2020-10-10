#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
long long MOD = 1e9 + 7;
long long extendedgcd ( long long a , long long b , long long& x, long long& y)
{
    if(b==0)
    {
        x = 1;
        y=0;
        return a;
    }
    long long d,x1,y1;
    d = gcd(b,a%b,x1,y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g)
{
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t);
    {
        int a,b,c,p;
        cin>>a,b,c,p;
        for(i=0;i<;i++)

        t--;
    }




    return 0;
}
