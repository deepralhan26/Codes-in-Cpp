#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
template<typename T> T gcd(T a, T b) { if (a == 0) return b; return gcd(b % a, a); }
template<typename T> T pow(T a, T b, long long m) {T ans = 1; while (b > 0) { if (b % 2 == 1) ans = (ans * a) % m; b /= 2; a = (a * a) % m; } return ans % m; }
int32_t main()
{
    IOS;
    int n , k ;
	cin>>n>>k;

	map <int , int > mymap ;
	deque<int> dq;
	int cnt = 0;

	for(int i = 0 ;i < n; i++)
    {
		int id ;
        cin>>id;

		if(mymap[id] == 0)
		{
			if(cnt == k)
            {
				mymap[dq.back()] = 0;
				dq.push_front(id) ;
				dq.pop_back() ;
			}
			else
            {
				cnt ++;
				dq.push_front(id);
			}
			mymap[id] = 1 ;

		}

	}

	cout<<cnt<<"\n";
	for(auto x : dq)
		cout<<x<<" ";


    return 0;
}

