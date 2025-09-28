#include <bits/stdc++.h>

using namespace std;

int test(string s) 
{
	for (int i = 0; i < s.length(); i++)
		if (s[i] != s[s.length() - 1 - i] || (s[i] % 2 != 0))
			return 0;
	return 1;
}

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    {
    	string s;
    	cin >> s;
    	if (test(s))
    	{
    		cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
