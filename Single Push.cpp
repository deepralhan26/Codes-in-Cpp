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
        int n,temp=0;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        int l=0,r=n;
        for(int i=0;i<n;i++)
        {
            if(a[i] != b[i])
            {
                l =i;
                break;
            }


        }
        for(int i=l ;i < n ;i++)
        {
            if(a[i]==b[i])
            {
                r = i;
                break;
            }

        }
        for(int i=r;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                temp = 1;
                break;
            }
        }
        if(temp == 1)
        {
            cout<<"NO"<<"\n";
        }
        if(temp==0)
        {
            int k = b[l] - a[l];
            if(k>=0)
            {
                for(int i=l;i<r;i++)
                    a[i] = a[i] + k;
                for(int i =0 ;i<n;i++)
                {
                    if(a[i] != b[i])
                    {
                        temp = -1;
                        break;
                    }

                }
                if(temp==-1)
                    cout<<"NO"<<"\n";
                if(temp==0)
                    cout<<"YES"<<"\n";
            }
            else
                cout<<"NO"<<"\n";


        }


        t--;
    }

    return 0;
}
