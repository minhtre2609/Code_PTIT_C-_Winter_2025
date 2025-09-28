#include <bits/stdc++.h>

using namespace std;

int nto (long long n)
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

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    long long a, b;
    cin >> a >> b;
    if (a > b)
    {
    	swap (a, b);
	}
    for (long long i = a; i <= b; i++)
    {
    	if (nto(i))
    	{
    		cout << i << " ";
		}
	}
	return 0;
}
