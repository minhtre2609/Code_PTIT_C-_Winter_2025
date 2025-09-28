#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) {
        int temp = b;
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
    	long long a, b;
    	cin >> a >> b;
    	long long gcdd = gcd (a, b);
    	long long lcm = a / gcdd * b;
		cout << lcm << " " <<  gcdd << endl;
	}
	return 0;
}
