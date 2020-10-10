#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int t;
    cin>>t;
    while(t!=0)
    {
        int temp=0;
        unsigned long int n,ans=0;

        cin>>n;
        while(n !=1)
        {
                if(n%3!=0)
                {
                  temp = 1;
                  break;
                }
                if(n%6 == 0)
                {
                    n = n/6;
                    ans++;
                }
                else
                {

                    n = n*2;
                    ans++;
                }

        }
        if(temp==0)
            cout<<ans<<"\n";
        else
            cout<<-1<<"\n";

        t--;
    }
    return 0;
}

