#include <bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        vector<int> m(mx + 1, 0);
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }

        int cnt = 0;
        for (int i = 0; i <= mx; i++)
        {
            if (m[i] > 1) cnt += m[i];
        }

        cout << cnt << endl;
    }
}

