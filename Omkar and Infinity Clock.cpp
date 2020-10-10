#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    long long n,k,j;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        int arr[n];
        long long x,d;
        cin>>arr[0];
        x=arr[0];
        d=arr[0];
        for(j=1;j<n;j++)
        {
            cin>>arr[j];
            if(arr[j]>d)
                d=arr[j];
            if(arr[j]<x)
                x=arr[j];
        }
        for(j=0;j<n;j++)
        {
            if(k%2==0)
                cout<<arr[j]-x<<" ";
            else
                cout<<d-arr[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;

}
