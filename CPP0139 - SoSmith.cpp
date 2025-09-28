#include <bits/stdc++.h>

using namespace std;

long long nto (long long n)
{
	if (n == 2 || n == 3)
	{
		return 1;
	}
	
	if (n < 2 || n % 2 == 0 || n % 3 == 0)
	{
		return 0;
	}
	
	for (long long i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

long long tongchuso (long long n)
{
	long long sum = 0;														 
	while (n != 0)
	{
		sum = sum + (n % 10);
		n = n / 10;
	}
	return sum;
}

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
    	
    	long long a = n;
    	long long z = 0;
    	for (long long i = 2; i < n; i++)
    	{
    		while (nto(i) && a % i == 0)
    		{
    			z += tongchuso(i);
    			a /= i;
			}
		}
		if (z == tongchuso(n))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
