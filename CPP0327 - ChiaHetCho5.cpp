#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while (t--)
    {
    	string s; cin >> s;
        long long sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
        	long long dec = s[i] - 48;
        	sum = (2 * sum + dec) % 5;
		}
		if (sum % 5 == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
