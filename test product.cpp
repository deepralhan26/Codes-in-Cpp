#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define debug(x) cout << "[" << #x <<": " << (x) <<"]"<< endl
#define pii pair<int,int>
#define clr(a,b) memset((a),b,sizeof(a))
#define rep(i,a,b) for(int i = a;i < b;i ++)
#define pb push_back
#define MP make_pair
#define LL long long
#define ull unsigned LL
#define ls i << 1
#define rs (i << 1) + 1
#define INT(t) int t; scanf("%d",&t)
const LL mod = 1e9 + 7;
const LL phip = 1e9 + 6;
const LL m = 1e9 + 7;
const int maxn = 8;
struct mat
{
    LL m[maxn][maxn];
};

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
long long int fun1(long long int n,long long int f1 ,long long int f2 ,long long int f3,long long int c)
{
    long long int f4;
	f4 = (((((((power(c,2)%m) * (f1%m))% m )*(f2%m))%m)*(f3%m))%m);
	long long int fx, fx_1, fx_2, fx_3, fx_4;
	if (n == 4)
		return f4;
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
	return fx%m;
}


mat cal(mat A,mat B,int n){
    mat C;
    for(int i = 1;i <= n;i ++)
        for(int j = 1;j <= n;j ++){
            C.m[i][j] = 0;
            for(int x = 1;x <= n;x ++){
                C.m[i][j] = ((A.m[i][x] * B.m[x][j]) % phip + C.m[i][j]) % phip;
            }
        }
    return C;
}

mat quick_mat(mat A,LL coun,int n){
    mat C;
    for(int i = 1;i <= n;i ++)
        for(int j = 1;j <= n;j ++)
            C.m[i][j] = (i == j);
    while(coun > 0){
        if(coun & 1) C = cal(C,A,n);
        A = cal(A,A,n);
        coun >>= 1;
    }
    return C;
}

LL quick_pow(LL a,LL b){
    LL ans = 1;
    while(b){
        if(b & 1) (ans *= a) %= mod;
        (a *= a) %= mod;
        b >>= 1;
    }
    return ans;
}

LL cal_cimiC(LL x){
    mat a; clr(a.m,0);
    a.m[1][1] = 14; a.m[1][2] = 6;
    a.m[1][3] = 2;  a.m[1][4] = 4;
    a.m[1][5] = 5;  a.m[1][6] = -1;
    if(x <= 6){
        return x == 6 ? a.m[1][1] : (x == 5 ? a.m[1][2] : a.m[1][3]);
    }
    mat A; clr(A.m,0);
    A.m[1][1] = A.m[2][1] = A.m[3][1] = A.m[4][1] = A.m[5][1] = A.m[6][1] = 1;
    A.m[1][2] = A.m[2][3] = A.m[4][4] = A.m[5][5] = A.m[6][6] = 1;
    A.m[6][4] = A.m[6][5] = -1;
    A = quick_mat(A,x - 6,6);
    a = cal(a,A,6);
    return a.m[1][1];
}

long long int fun2(long long int x,long long int f1 ,long long int f2 ,long long int f3,long long int c)
{
    mat a;
        a.m[1][1] = 1; a.m[1][2] = 2; a.m[1][3] = 4;
        a.m[2][1] = 1; a.m[2][2] = 2; a.m[2][3] = 3;
        a.m[3][1] = 1; a.m[3][2] = 1; a.m[3][3] = 2;
        LL cimi_c = cal_cimiC(x);
//        debug(cimi_c);
        LL F1,F2,F3;
        if(x <= 6)
        {
            F1 = quick_pow(f1,a.m[3][x - 3]);
            F2 = quick_pow(f2,a.m[2][x - 3]);
            F3 = quick_pow(f3,a.m[1][x - 3]);
            return (quick_pow(c,cimi_c) * F1 % mod * F2 % mod * F3 % mod);

        }
        mat A;
        A.m[1][1] = 0; A.m[1][2] = 0; A.m[1][3] = 1;
        A.m[2][1] = 1; A.m[2][2] = 0; A.m[2][3] = 1;
        A.m[3][1] = 0; A.m[3][2] = 1; A.m[3][3] = 1;
        A = quick_mat(A,x - 6,3);
        a = cal(a,A,3);
        F1 = quick_pow(f1,a.m[3][3]);
        F2 = quick_pow(f2,a.m[2][3]);
        F3 = quick_pow(f3,a.m[1][3]);
        return ( quick_pow(c,cimi_c) * F1 % mod * F2 % mod * F3 % mod );


}






int32_t main()
{
    IOS;
    long long int n,f1,f2,f3,c;
    while(1)
    {
     n = (rand() % m )+ 4;
     f1 = (rand()%m ) + 1;
     f2 = (rand()%m)  + 1;
     f3 = (rand()%m ) + 1;
     c = (rand()%m ) + 1;
      long long int a1 = fun1(n,f1,f2,f3,c);
      long long int a2 = fun2(n,f1,f2,f3,c);
      if(a1!=a2)
      {


        cout<<n<<" "<<f1<<" "<<f2<<" "<<f3<<" "<<" "<<c<<" ";
        break;
      }
      else
        cout<<"Y";
    }




    return 0;
}
