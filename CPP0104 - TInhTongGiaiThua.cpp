#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    long long multiple = 1;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
    	multiple *= i;
    	sum += multiple;
	}
	cout << sum << endl;
	return 0;
}
