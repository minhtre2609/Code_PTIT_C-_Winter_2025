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
    while(t--)
    {
    	int n;
    	cin >> n;
    	vector<int> a(n);
    	for (int i = 0; i < n; i++)
    	{
    		cin >> a[i];
		}
		if (n == 1)
		{
			cout << "0" << endl;
			continue;
		}
		int g = 0;
		for (int i = 1; i < n; i++)
		{
			g = gcd(g, abs(a[i] - a[0]));
		}
		int cnt = 0;
		for (int i = 1; (long long)i * i <= g; i++)
		{
			if (g % i == 0)
			{
				cnt++;
				if (i != g / i)
				{
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}
