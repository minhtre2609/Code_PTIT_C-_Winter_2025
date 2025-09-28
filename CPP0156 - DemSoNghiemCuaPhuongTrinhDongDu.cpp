#include <bits/stdc++.h>

using namespace std;

int test(int n, int p)
{
	long long a = 0;
	for (long long x = 1; x < p; x++)
	{
		if ((x * x) % p == 1)
		{
			long long y = x + p * (n / p);
			if (y > n)
				y -= p;
			a += ((y - x) / p + 1); 
		}
	}
	return a;
}

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
    	int a, b;
    	cin >> a >> b;
    	cout << test(a, b) << endl;
	}
}
