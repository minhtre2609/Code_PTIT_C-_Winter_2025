#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
    	string s;
    	getline(cin, s);
    	int cnt = 0;
    	for (int i = 0; i < s.length(); i++)
    	{
    		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
    		{
    			cnt++;
			}
		}
		cout << cnt + 1 << endl;
	}
}
