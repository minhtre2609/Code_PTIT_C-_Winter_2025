#include <bits/stdc++.h>

using namespace std;

int fibo(int n) 
{
	if (n == 1 || n == 2)return 1;
	return fibo(n - 1) + fibo(n - 2);
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
    	vector<int> m(n);
    	for (int i = 0; i < n; i++)
    	{
    		cin >> m[i];
		}
		vector<int> x(20);
		x[1] = 0;
		for (int i = 2; i < 17; i++)
		{
			x[i] = fibo(i);
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < 17; j++)
			{
				if (m[i] == x[j])
				{
					cout << m[i] << " ";
				}
			}
		}
		cout << endl;
	}
}
