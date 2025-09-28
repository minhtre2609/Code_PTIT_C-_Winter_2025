#include <bits/stdc++.h>

using namespace std;

int lienke (string s)
{
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (abs(s[i+1] - s[i]) != 1)
		{
			return 0;
		}
	}
	return 1;
}

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
    	string s;
    	cin >> s;
    	if (lienke(s))
    	{
    		cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
