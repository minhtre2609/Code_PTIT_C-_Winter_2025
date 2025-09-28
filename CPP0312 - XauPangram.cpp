#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
    	long long f[26] = {0};
    	string s;
    	cin >> s;
    	int k;
    	cin >> k;
    	for (auto i : s)
    	{
    		f[i - 'a']++;
		}
		long long cnt = 0;
		for (int i = 0; i <= 26; i++)
		{
			if (f[i] == 0) cnt++;
		}
		if (cnt > k)
		{
			cout << 0 << endl;
		}
		else
		{
			cout << 1 << endl;
		}
	}
}


