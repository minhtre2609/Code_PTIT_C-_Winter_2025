#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) 
{
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
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
    	long long x, y, z ,n;
    	cin >> x >> y >> z >> n;
    	long long a = x * y / gcd(x, y);
    	a = a * z / gcd(a, z);
    	long long d = pow(10, n - 1);
    	long long e = pow(10, n);
    	if (a >= e)
    	{
    		cout << "-1" << endl;
		}
		else
		{
			long long c = d % a;
			long long u = d + a - c;
			if (c == 0)
			{
				cout << d << endl;
			}
			else
			{
				cout << u << endl;
			}
		}
	}
	return 0;
}
