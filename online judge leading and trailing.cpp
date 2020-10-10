
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
long long MOD = 1e9 + 7;

long long gcd(long long a,long long b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
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

long long bin_pow(long long a, long long b)
{
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
long long multi(long long a , long long b , long long m)
{
    long long res = 0;
    a = a%m;
    while (b > 0) {
        if (b & 1)
            res = (res + a)%m;
        a = (a%m + a%m)%m;
        b >>= 1;
    }
    return res;

}
void first3(long long a , long long b)
{
    double x = b*log10(a);
    x = x - (int)x;
    x = pow(10,x);
    x = x*10000;
    string s = to_string(x);
    cout<<s[0]<<s[1]<<s[2];

}
int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,ans,i=6;
        cin>>x>>y;


        first3(x,y);
        cout<<"..." << mod_pow(x,y,1000)<<endl;
    }



    return 0;
}
