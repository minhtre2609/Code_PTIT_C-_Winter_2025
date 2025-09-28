#include <bits/stdc++.h>

using namespace std;

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
    	cin >> a[i];
	}

    vector<int> freq(1001, 0);
    for (int x : a) if (x >= 0 && x <= 1000) freq[x]++;

    for (int i = 0; i <= 1000; i++) if (freq[i] > 0) cout << i << " ";
    cout << endl;
}
