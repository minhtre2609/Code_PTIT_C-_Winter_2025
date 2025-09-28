#include <bits/stdc++.h>

using namespace std;

int nto (int n)
{
	if (n == 2 || n == 3)
	{
		return 1;
	}
	
	if (n < 2 || n % 2 == 0 || n % 3 == 0)
	{
		return 0;
	}
	
	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int tang (int n)
{
	while (n >= 10)
	{
		int r = n % 10;
		if (r <= (n / 10) % 10)
		{
			return 0;
		}
		n /= 10;
	}
	return 1;
}

int giam (int n)
{
	while (n >= 10)
	{
		int r = n % 10;
		if (r >= (n / 10) % 10)
		{
			return 0;
		}
		n /= 10;
	}
	return 1;
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
        long long cnt = 0;
        long long start = pow(10,n - 1);
        long long end = pow(10,n);
        for (long long i = start; i < end; i++)
        {
        	if ((tang(i) || giam(i)) && nto(i))
        	{
        		cnt++;
			}
		}
		cout << cnt << endl;
    }
}
