#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<char> s;
    string str;
    cin>>str;
    long int n = str.size();
    for(long int i=0;i<n;i++)
    {
        char x = str[i];
        if(s.empty() == false && s.top() == x)
        {
            s.pop();
        }
        else
        {
            s.push(x);
        }
    }
    if(s.empty()==true)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
