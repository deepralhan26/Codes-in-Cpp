#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
long long int  m = 1e9 + 7;
template<typename T> T gcd(T a, T b) { if (a == 0) return b; return gcd(b % a, a); }
long long int power(long long int x, long long int y)
{
	long long int res = 1;
	x = x % m;
	if (x == 0) return 0;

	while (y > 0)
	{

		if (y & 1)
			res = (res * x) % m;

		y = y >> 1;
		x = ((x % m) * (x % m)) % m;
	}
	return res;
}
int32_t main()
{
	IOS;
	long long int n, f1, f2, f3, c;
	cin >> n >> f1 >> f2 >> f3 >> c;
	long long int f4;
	f4 = (((((((power(c,2)%m) * (f1%m))% m )*(f2%m))%m)*(f3%m))%m);
	long long int fx, fx_1, fx_2, fx_3, fx_4;
	if (n == 4)
		cout << f4;
	else
	{
		fx_1 = f4;
		fx_2 = f3;
		fx_3 = f2;
		fx_4 = f1;
		for (long long int i = 4; i < n; i++)
		{
			fx = ((((power((((c%m) *(fx_1%m))%m),2))%m) * (power(((fx_4)%m),(m-2)))%m)%m);
			fx_4 = fx_3%m;
			fx_3 = fx_2%m;
			fx_2 = fx_1%m;
			fx_1 = fx%m;
		}

	}
	cout << fx%m;


	return 0;
}
