#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    short int a,b;
    cin>>a>>b;
    short int counts=0;
    while(a<=b)
    {
        a = 3*a;
        b =2*b;
        counts++;
    }
    cout<<counts;
    return 0;
}
