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
    deque<int> q;
    int n,k;
    cin>>n>>k;
    deque <int> :: iterator it;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        it = find(q.begin(),q.end(),x);
        if(it!= q.end())
            continue;
        else
        {
            if(q.size()<k)
            {
                q.push_back(x);
            }
            else
            {
                q.pop_front();
                q.push_back(x);
            }
        }

    }
    cout<<q.size()<<endl;
    while(q.empty() == false)
    {
        cout<<q.back()<<" ";
        q.pop_back();
    }






    return 0;
}
