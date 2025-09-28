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
	
	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	
	return 1;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) 
	{
        long long l, r;
        cin >> l >> r;
        long long cnt = 0;
        for (long long i = l; (long long)i * i <= r; i++) 
		{
            if (nto(i) == 1) 
			{
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
