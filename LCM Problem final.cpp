#include<iostream>
using namespace std;
int main()
{
    long long t,i,l,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>l>>r;
        if(l*2<=r)
            cout<<l<<" "<<l*2;
        else
            cout<<-1<<" "<<-1;
        cout<<"\n";
    }
    return 0;

}
