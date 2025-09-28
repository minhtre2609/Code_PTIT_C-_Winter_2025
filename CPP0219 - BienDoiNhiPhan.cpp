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
    	int n, m;
    	cin >> n >> m;
    	
    	vector<vector<int>> a(n, vector<int>(m));
    	vector<vector<int>> b(n, vector<int>(m));
    	
    	for (int i = 0; i < n; i++)
    	{
    		for (int j = 0; j < m; j++)
    		{
    			cin >> a[i][j];
    			b[i][j] = a[i][j];
			}
		}
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (a[i][j] == 1)
				{
					for (int k = 0; k < n; k++)
					{
						b[k][j] = 1;
					}
					for (int l = 0; l < m; l++)
					{
						b[i][l] = 1;
					}
				}
			}
		}
		
		for (int i = 0; i < n; i++)
    	{
    		for (int j = 0; j < m; j++)
    		{
    			cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}
}
