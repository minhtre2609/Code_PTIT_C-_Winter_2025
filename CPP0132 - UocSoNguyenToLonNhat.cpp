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
    	long long n;
    	cin >> n;
    	long long maxx = -1e18;
    	
    	while (n % 2 == 0)
    	{
    		maxx = 2;
    		n /= 2;
		}
		for (long long i = 3; i * i <= n; i += 2)
		{
			while (n % i == 0)
			{
				maxx = i;
				n /= i;
			}
		}
		if (n > 1)
		{
			maxx = n;
		}
		cout << maxx << endl;
	}
	return 0;
}
