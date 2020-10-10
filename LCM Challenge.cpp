#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n;
    unsigned long long int ans;
    cin>>n;

    if(n==1)
        cout<<1;
    if(n==2)
        cout<<2;
    if(n>2)
    {
        if (n % 2 != 0)
        {
             ans = n*(n - 1)*(n - 2);
             cout << ans;

        }

        else if (__gcd(n, (n - 3)) == 1)
        {
            ans = (n)*(n - 1)*(n - 3);
            cout << ans;
        }


        else
        {
         ans = (n - 1)*(n - 2)*(n - 3);
         cout<<ans;
        }
    }

    return 0;
}
