#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
    	long long n, k;
    	cin >> n >> k;
    	int sum = 0;
    	for (long long i = 1; i <= n; i++)
    	{
    		sum += (i % k);
		}
		if (sum == k)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
}
