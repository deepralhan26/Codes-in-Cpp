#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
long long int MAX = 1000000;
long long int mod = 1e9 +7;
template<typename T> T gcd(T a, T b) { if (a == 0) return b; return gcd(b % a, a); }
vector<long long int> fac(MAX + 1);
vector<long long int> invfac(MAX + 1);
long long int power(long long int x, long long int y)
{
	long long int res = 1;
	x = x % mod;
	if (x == 0) return 0;

	while (y > 0)
	{

		if (y & 1)
			res = (res * x) % mod;

		y = y >> 1;
		x = ((x%mod)*(x%mod))%mod;
	}
	return res;
}
bool is_good(long long num,int a , int b)
{
    while(num>0)
    {
        int dig = num%10;
        if(dig == a || dig == b)
            num = num/10;
        else
            return false;
    }
    return true;

}
long long int permute(long long int n, long long int r)
{
    long long int ans = fac[n]%mod;
    ans = (ans*((invfac[r])%mod))%mod;
    ans = (ans*((invfac[n-r])%mod))%mod;
    return ans%mod;

}

int32_t main()
{
    IOS;
    int a,b;
    long long int n;
    cin>>a>>b>>n;
    fac[0] = 1;
    fac[1] = 1;
    for(long long int i=2;i<=MAX;i++)
    {
        fac[i] = ((i*fac[i-1])%mod);
    }
    invfac[MAX] = power(fac[MAX],(mod-2));
    for(long long int i=(MAX-1);i>=0;i--)
        invfac[i] = (invfac[i+1]*(i+1))%mod;
    long long int ans = 0;

    for(int i=0;i<=n;i++)
    {
        long long sum = i* a + (n-i)*b;
        bool check = is_good(sum,a,b);
        if(check == true)
        {
            ans += permute(n,i);
            ans = ans%mod;
        }


    }
    cout<<ans%mod;




    return 0;
}
