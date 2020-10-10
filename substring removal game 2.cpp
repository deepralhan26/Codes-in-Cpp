#include<iostream>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long t,i,j,count;
  cin>>t;
  int k=0,p=0,l,s;
  string str;
  int x=0;
  int arr[100];
 for(i=1;i<=t;i++)
 {
     cin>>str;
     k=str.length();
     count=0;
     for(j=0;j<k;j++)
     {
         arr[j]=0;
         if(str[j]=='1')
         {
         arr[count]++;
         if(str[j+1]=='0'&&j!=k-2)
         count++;
         }
     }
     k=-1;

     p=0;
    sort(arr,arr+count+1);
     k=0;
     for(j=count;j>=0;j=j-2)
     {
        k=k+arr[j] ;
     }
     cout<<k<<"\n";

 }

}
