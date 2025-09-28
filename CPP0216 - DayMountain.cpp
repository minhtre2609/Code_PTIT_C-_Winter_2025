#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	long long n;
    cin >> n;
    while(n--)
    {
        long long k;
        cin >> k;
        vector <long long> a(k);
        for(long long i = 1;i<=k;i++)
        {
            cin >> a[i];
        }
        long long l,r;
        cin >> l >> r;
        long long i = l;
        long long temp = 0;
        while(i<=r)
        {
            if(a[i] > a[i+1])
            {
                temp =i;
                break;
            }
            i++;
        }
        if(temp == 0) cout << "Yes" << endl;
        else
        {
            bool yessir = 1;
            for(long long j = temp;j<=r;j++)
            {
                if(a[j] < a[j+1]) yessir = 0;
            }
            if(yessir) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}
