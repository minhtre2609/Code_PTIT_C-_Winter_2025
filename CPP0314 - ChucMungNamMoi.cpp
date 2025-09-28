#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    cin.ignore();
    vector<string> m(n);
    for (int i = 0; i < n; i++)
    {
    	getline(cin, m[i]);
	}
	int cnt = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int s = 0;
		for (int j = 0; j < i; j++)
		{
			if (m[i] == m[j]) s++;

		}
		if (s > 0) continue;
		for (int j = i + 1; j < n; j++)
		{
			if (m[i] == m[j]) cnt++;
		}
	}
	cout << n - cnt << endl;
}
