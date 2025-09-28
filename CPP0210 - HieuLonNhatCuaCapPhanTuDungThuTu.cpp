#include <bits/stdc++.h>

using namespace std;

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
    	vector<int> m(n);
    	for (int i = 0; i < n; i++)
    	{
    		cin >> m[i];
		}
		int maxx = -1e9;
		for (int i = n - 1; i >= 0; i--)
		{
			for (int j = i; j >= 0; j--)
			{
				if (m[i] - m[j] > maxx)
				{
					maxx = m[i] - m[j];
				}
			}
		}
		if (maxx <= 0)
		{
			cout << -1 << endl;
		}
		else
		{
			cout << maxx << endl;
		}
																																										
	}
}
