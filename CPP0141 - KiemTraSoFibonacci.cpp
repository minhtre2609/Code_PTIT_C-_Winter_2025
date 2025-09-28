#include <bits/stdc++.h>

using namespace std;

long long fibonacci(long long n) 
{
    if (n == 0 || n == 1) 
    {
    	return 1;
	}
    long long a = 0, b = 1;
    while (b < n) 
	{
        long long c = a + b;
        a = b;
        b = c;
    }
    return b == n;
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
    	if (fibonacci(n))
    	{
    		cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
