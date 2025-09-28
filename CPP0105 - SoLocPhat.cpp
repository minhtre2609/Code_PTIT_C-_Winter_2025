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
    	int locphat = 1;
    	while (n > 0)
    	{
    		int digit = n % 10;
    		if (digit != 0 && digit != 6 && digit != 8)
    		{
    			locphat = 0;
    			break;
			}
			n /= 10;
		}
		if (locphat == 1)
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
