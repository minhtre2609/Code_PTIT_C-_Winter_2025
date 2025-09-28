#include <bits/stdc++.h>

using namespace std;

void pt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			int cnt = 0;
			while (n % i == 0)
			{
				cnt++;
				n /= i;
			}
			cout << i << " " << cnt << " ";
		}
	}
	if (n != 1)
	{
		cout << n << " " << 1;
	}
	cout << endl;
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
    	pt(n);
	}
}
