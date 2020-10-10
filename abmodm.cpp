#include <bits/stdc++.h>
using namespace std;
long long product(long long a, long long b,long long int m)
{
	long long res = 0;
	a = a % m;
	while (b > 0)
    {
		if (b & 1)
			res = (res  + a)%m;
		a = (a + a)%m;
		b >>= 1;
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,m;
        cin>>a>>b>>m;
        cout<<product(a,b,m)<<"\n";
    }




    return 0;
}

