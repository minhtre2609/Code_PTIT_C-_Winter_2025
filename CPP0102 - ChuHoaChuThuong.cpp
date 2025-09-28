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
    	char c;
    	cin >> c;
    	
    	if (isupper(c))
    	{
    		cout << (char)tolower(c) << endl;
		}
		else if (islower(c))
		{
			cout << (char)toupper(c) << endl;
		}
	}
	return 0;
}
