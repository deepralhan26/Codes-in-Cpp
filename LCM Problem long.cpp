#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        short ans=-1;
        unsigned long int l,r,x,y;
        cin>>l>>r;
        for(x = l;x<r;x++)
        {
            for(y= x+1 ;y <=r ; y++)
            {
                unsigned long long int lcm = ((x/(__gcd(x, y)))*y);
                if(lcm>= l && lcm<= r)
                {
                    ans =1;
                    cout<<x<<" "<<y<<"\n";
                    break;
                }
            }
            if(ans==1)
                break;
        }
        if(ans == -1)
            cout<<ans<<" "<<ans;
        t--;
    }
    return 0;
}
