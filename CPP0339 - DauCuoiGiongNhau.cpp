#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    getchar();
    while (t--)
    {
    	string s; getline(cin, s);
    	int cnt = 0;
    	for (int i = 0; i < s.length(); i++)
    	{
    		for (int j = 0; j < s.length; j++)
    		{
    			if (s[i] == s[j]) cnt++;
			}
		}
		cout << cnt << endl;
	}
}
