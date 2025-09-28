#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) 
	{
        int temp = b;
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
    	int m, n, a, b, d1 = 0, d2 = 0;
        cin >> m >> n >> a >> b;
        for (int i = m; i <= n; i++)
        {
            if (i % a == 0 || i % b == 0)
            {
            	d1++;
			}
        }
        cout << d1 + d2 << endl;
	}
}
