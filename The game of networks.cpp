#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[abs(arr[i]) - 1] > 0)
        {
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];

        }

        else
        {
            cout << abs(arr[i]) << " ";
            for(int j=0;j<n;j++)
                cout<<arr[i]<<" ";
            cout<<"\n";
        }

    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            cout << (i + 1);
    }
    return 0;
}
