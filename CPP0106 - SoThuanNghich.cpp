#include <bits/stdc++.h>

using namespace std;

long long thuannghich (long long n)
{
	long long m = 0;
	long long tmp = n;
	
	while (n != 0)
	{
		m = (m * 10) + (n % 10);
		n /= 10;
	}
	if (tmp == m)
	{
		return 1;
	}
	return 0;
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
    	
    	if (thuannghich(n))
    	{
    		cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}

