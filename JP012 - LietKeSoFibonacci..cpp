#include <bits/stdc++.h>

using namespace std;

long long fibonacci(int n) 
{
    if (n == 1 || n == 2) 
    {
    	return 1;
	}
    long long f1 = 1, f2 = 1, fn;
    for (int i = 3; i <= n; i++) 
	{
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return fn;
}

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
    	int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
    	    cout << fibonacci(i) << " ";
	    }
	    cout << endl;
	}
	return 0;
}
