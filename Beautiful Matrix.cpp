#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    short int a[5][5];
    short int one,two;
    for(short int i=0 ;i<5;i++)
    {
        for(short int j=0 ;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]== 1)
            {
                one = i;
                two = j ;
            }

        }

    }
    cout<<(abs(one-2)+abs(two-2));


    return 0;
}
