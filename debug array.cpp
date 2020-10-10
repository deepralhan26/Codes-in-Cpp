#include <bits/stdc++.h>
using namespace std;
vector<long int> t1(vector<long int> arr)
{
    long int n = arr.size();
    for (long int i = 0; i < n; i++)
	{
		long int old = arr[i] % n;
		long int news = arr[old] % n;
		arr[i] = n * news + arr[i];
	}
	vector<long int>ans(n);
	for(long int i=0;i<n;i++)
        ans[i] = arr[i]/n;


	return ans;
}
vector<long int> t2(vector<long int>array1)
{
    long int n = array1.size();
    vector<long int>arr(n);
    for(long int i=0;i<n;i++)
        arr[i] = array1[array1[i]];
    return arr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	while(1)
    {
        long int n;
        n =(rand()%(1000000)) + 1;
        vector<long int>arr;
        for (long int i = 0; i < n; i++)
        {
            arr.push_back(i);
        }
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

        shuffle (arr.begin(), arr.end(), std::default_random_engine(seed));
        vector<long int>a1 = t1(arr);
        vector<long int>a2 = t2(arr);
        int temp=0;
        if(a1!=a2)
        {
            for(long int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
                temp=1;

            }
            cout<<"\n";
            for(long int i=0;i<n;i++)
            {
                cout<<a1[i]<<" ";
                temp=1;

            }
            cout<<"\n";
            for(long int i=0;i<n;i++)
            {
                cout<<a2[i]<<" ";
                temp=1;

            }

        }
        else
        {
            cout<<"Y";
        }
        if(temp==1)
            break;
    }



    return 0;
}


