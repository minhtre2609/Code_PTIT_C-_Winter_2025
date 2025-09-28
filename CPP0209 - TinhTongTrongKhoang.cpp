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
    	int n, q;
    	cin >> n >> q;
    	vector<int> a(n);
    	vector<long long> p(n + 1, 0);
    	for (int i = 1; i <= n; i++)
    	{
    		cin >> a[i];
    		p[i] = p[i - 1] + a[i];
		}
		while (q--)
		{
			int l, r;
			cin >> l >> r;
			cout << p[r] - p[l - 1] << endl;
		}
		
	}
}
