#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    {
    	long long n, p;
    	cin >> n >> p;
    	
    	long long res = 0;
    	long long mu = p;
    	while (mu <= n)
    	{
    		res += n / mu;
    		if (mu > n / p)
    		{
    			break;
			}
			mu *= p;
		}
		cout << res << endl;
    	
	}
}
