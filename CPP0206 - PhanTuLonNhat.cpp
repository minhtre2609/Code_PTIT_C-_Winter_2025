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
    	long long n;
    	cin >> n;
    	vector<long long> a(n);
    	for (long long i = 0; i < n; i++)
    	{
    		cin >> a[i];
		}
		sort(a.begin(), a.end());
		cout << a[n - 1] << endl;
	}
}
