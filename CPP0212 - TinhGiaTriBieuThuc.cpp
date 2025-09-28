#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const long long MOD = 1000000007LL;
    int T;
    if (!(cin >> T)) 
    {
    	return 0;
	}
    while (T--) 
	{
        int n;
        long long x;
        cin >> n >> x;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) 
        {
        	cin >> a[i];
		}

        long long res = 0;
        x %= MOD;

        for (int i = 0; i < n; ++i) 
		{
            res = (res * x + (a[i] % MOD)) % MOD;
        }

        cout << res % MOD << "\n";
    }
    return 0;
}

