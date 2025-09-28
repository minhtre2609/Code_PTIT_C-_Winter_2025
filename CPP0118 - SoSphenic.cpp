#include <bits/stdc++.h>

using namespace std;

int sphenic(long long n) 
{
    int c = 0;
    for (long long i = 2; i * i <= n; i++) 
	{
        if (n % i == 0) 
		{
            int p = 0;
            while (n % i == 0) 
			{
                n /= i;
                p++;
            }
            if (p > 1) return 0;
            c++;
        }
    }
    if (n > 1) 
    {
    	c++;
	}
    return c == 3 ? 1 : 0;
}

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	cin >> n;
    	cout << (sphenic(n) ? "1" : "0") << endl;
	}
}
