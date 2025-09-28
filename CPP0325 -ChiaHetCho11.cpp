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
        for(int i = 0; i < s.length(); i++)
        {
    	    if (i % 2 == 0) sum += s[i] - 48;
    	    else sum -= s[i] - 48;
	    }
	    if (sum % 11 == 0) cout << 1 << endl;
	    else cout << 0 << endl;
	}
}
