#include <bits/stdc++.h>

using namespace std;

long long tongchuso (long long n)
{
	long long s = 0;														 
	while (n != 0)
	{
		s += (n % 10);
		n /= 10;
	}
	return s;
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
    	while (n != 0)
    	{
    		n = tongchuso(n);
    		if (n < 10)
    		{
    			cout << n << endl;
    			break;
			}
		}
	}
	return 0;
}
