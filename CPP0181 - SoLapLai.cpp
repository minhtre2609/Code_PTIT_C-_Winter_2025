#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) 
{
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
    	long long a, x, y;
    	cin >> a >> x >> y;
    	long long e = gcd(x, y);
    	for (int i = 0; i < e; i++)
    	{
    		cout << a;
		}
		cout << endl;
	}
}
