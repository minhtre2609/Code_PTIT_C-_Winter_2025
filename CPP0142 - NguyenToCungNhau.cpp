#include <bits/stdc++.h>

using namespace std;

int nto(int n) 
{
	if (n < 2)
	{
		return 0;
	}
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return 0;
			}
		}
	}
	return 1;
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
    	int cnt = 0;
    	bool m[100000];
    	for (int i = 1; i < n; i++)
    	{
    		m[i] = true;
		}
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				for (int j = i; j < n; j += i)
				{
					m[j] = false;
				}
			}
		}
		for (int i = 1; i < n; i++)
		{
			if (m[i] == true)
			{
				cnt++;
			}
		}
		if (nto(cnt))
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
}
