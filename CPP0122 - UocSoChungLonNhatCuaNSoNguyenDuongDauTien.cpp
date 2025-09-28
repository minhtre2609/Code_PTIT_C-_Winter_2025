#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) 
{
    while (b != 0) 
	{
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(long long a, long long b) 
{
    return a / gcd(a, b) * b;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin >> n;
        long long ans = 1;
        for (int i = 2; i <= n; i++) 
	    {
		    ans = lcm(ans, i);
        }
        cout << ans << endl;
	}
    return 0;
}

