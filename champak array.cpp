#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin >> n;
    long long int a[n];

    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (long long int i = 0; i < n; i++)
    {
        long long int old = a[i] % n;
        long long int newValue = a[old] % n;
        a[i] = a[i] + newValue * n;
        cout << a[i] / n << " ";

    }

}