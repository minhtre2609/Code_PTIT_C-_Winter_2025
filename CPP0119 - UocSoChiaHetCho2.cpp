#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) 
	{
        long long n;
        cin >> n;
        if (n % 2 != 0) 
		{
            cout << 0 << endl;
            continue;
        }
        int dem = 0;
        for (long long i = 1; i * i <= n; i++) 
		{
            if (n % i == 0) {
                if (i % 2 == 0) 
                {
                	dem++;
				}
                long long j = n / i;
                if (j != i && j % 2 == 0) 
                {
                	dem++;
				}
            }
        }
        cout << dem << endl;
    }
}

