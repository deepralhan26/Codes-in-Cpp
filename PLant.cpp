#include <bits/stdc++.h>
using namespace std;
const long long int mod = 1e9 + 7;

long long int mod_pow(long long int x, long long int y)
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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long int n;
	cin >> n;
	if (n == 0)
		cout << "1";
	else
		cout << ((mod_pow(2, (n - 1)) % mod) * ((mod_pow(2, n) + 1) % mod)) % mod;
	return 0;
}

