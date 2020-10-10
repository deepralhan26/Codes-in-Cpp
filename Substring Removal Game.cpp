#include<iostream>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        string s1;
        cin>>s1;
        int n = s1.size();
        vector<int> arr(n,0);
        int counts =0;
        int ans =0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1')
            {
                arr[counts]++;
                if(s1[i+1]=='0' &&  i!= n-1)
                    counts++;
            }
        }

        sort(arr.begin(), arr.end(), greater<int>());
        for(int i=0;i<n;i++)
        {

            if(i%2==0)
                ans = ans + arr[i];
        }
        cout<<ans<<"\n";




        t--;
    }
    return 0;
}
