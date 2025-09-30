#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
	cin >> t;
	while(t--)
	{
		string a;
		cin >> a;
		int n = a.size(), s = a.size(), b[26] = {};
		for(int i = 0; i < n; i++)
		{
			b[a[i]-'a']++;
		}
		for(int i = 0;i < 26; i++) s+=b[i] * (b[i] - 1) / 2;
		cout << s <<endl;
	}
}

