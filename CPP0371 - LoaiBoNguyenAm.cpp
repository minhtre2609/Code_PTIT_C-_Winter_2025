#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s; cin >> s;
	for (int i = 0; i < s.length(); i++) 
	{
		if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I'|| s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i'|| s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
			continue;
			char c = tolower(s[i]);
			cout << "." << c;
	}
}
