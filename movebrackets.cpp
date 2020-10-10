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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        stack<char>s;
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            char x = str[i];
            if(x == '(')
            {
                    s.push(x);
            }
            else if(x == ')')
            {
                if(s.empty() == false && s.top() == '(')
                    s.pop();
                else
                    s.push(x);
            }


        }
        cout<<((s.size())/2)<<endl;
    }



    return 0;
}
