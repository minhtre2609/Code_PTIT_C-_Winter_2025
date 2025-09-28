#include <bits/stdc++.h>

using namespace std;

int canbang(int n) 
{
    int a = 0, b = 0;
    while (n != 0) 
	{
        int i = n % 10;
        if (i % 2 == 0)
        {
        	a++;
		}
        else
        {
        	b++;
		}
        n /= 10;
    }
    if (a == b)
    {
    	return 1;
	}
    return 0;
}

int main ()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    
	int t;
    cin >> t;
    int s = 0;
    for (int i = pow(10, t - 1); i < pow(10, t); i++) 
	{
        if (canbang(i)) 
		{
            cout << i << " "; 
            s++;
            if (s % 10 == 0)
            {
            	cout << endl;
			}
        }
   }
}
