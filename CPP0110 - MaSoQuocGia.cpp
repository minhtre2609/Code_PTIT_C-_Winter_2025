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
		string s;
		cin >> s;
		int x = s.find("084");
		s.erase(x, 3);
		cout << s << endl;
	}
}
