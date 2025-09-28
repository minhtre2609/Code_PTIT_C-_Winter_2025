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
    	int n;
    	cin >> n;
    	long long fibo[100];
    	fibo[0] = 1;
    	fibo[1] = 1;
    	for (int i = 2; i < 100; i++)
    	{
    		fibo[i] = fibo[i - 2] + fibo[i - 1];
		}
		cout << fibo[n - 1] << endl;
	}
}
