#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
    	long long a, m;
    	cin >> a >> m;
    	long long minn = -1;
    	for (long long i = 0; i <= m; i++)
    	{
    		if ((i * a) % m == 1)
    		{
    			minn = i;
    			break;
			}
		}
		cout << minn << endl;
	}
}
