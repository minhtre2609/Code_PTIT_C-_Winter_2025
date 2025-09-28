#include <bits/stdc++.h>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) 
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        vector<int> res;

        while (h1 <= h2 && c1 <= c2) 
        {
            for (int j = c1; j <= c2; j++) res.push_back(a[h1][j]);
            ++h1;

            for (int i = h1; i <= h2; i++) res.push_back(a[i][c2]);
            --c2;

            if (h1 <= h2) {
                for (int j = c2; j >= c1; j--) res.push_back(a[h2][j]);
                --h2;
            }

            if (c1 <= c2) {
                for (int i = h2; i >= h1; i--) res.push_back(a[i][c1]);
                ++c1;
            }
        }

        for (int x : res) cout << x << " ";
        cout << "\n";
    }
}

