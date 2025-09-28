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
    	long long lucky = n % 100;
    	if (lucky == 86)
    	{
    		cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
	return 0;
}
