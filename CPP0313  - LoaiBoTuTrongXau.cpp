#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    getline(cin, s);
    string a;
    cin >> a;
    while (1)
    {
    	int x = s.find(a);
    	if (x == -1) break;
    	s.erase (x, a.length() + 1);
	}
	cout << s << endl;
}
