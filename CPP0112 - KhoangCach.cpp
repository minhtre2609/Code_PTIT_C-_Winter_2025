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
    	double xA, yA, xB, yB;
    	cin >> xA >> yA >> xB >> yB;
    	cout << fixed << setprecision(4) << (double)sqrt((xA - xB)*(xA - xB) + (yA - yB)*(yA - yB)) << endl;
	}
	return 0;
}
